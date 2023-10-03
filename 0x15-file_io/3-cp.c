#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - This allocates 1024 bytes for a bufferr
 * @file: the file buffer
 *
 * Return: the pointer to buffer
 *
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - This closes the file descriptors
 * @fd: the file descriptor
 *
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This copies the contents of a file to another file
 * @argc: The number of arguments
 * @argv: the arguments
 *
 * Return: 0
 *
 * Description: If incorrect - exit code 97
 *              If cannot be read - exit code 98
 *              If cannot be created or written to - exit code 99
 *              If cannot be closed - exit code 100
 *
 */
int main(int argc, char *argv[])
{
	int frm;
	int to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_frm file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	r = read(frm, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read frm file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);

		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(frm, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(frm);
	close_file(to);
	return (0);
}
