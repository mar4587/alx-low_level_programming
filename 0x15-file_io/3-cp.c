#include "main.h"
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This allocates 1024 bytes for a buffer
 * @file: The name of the file
 *
 * Return: the buffer
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
 * close_file - This loses the file descriptor
 * @fd: The file descriptor
 *
 * Return: void
 */
void close_file(int fd)
{
	int hr;

	hr = close(fd);

	if (hr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This copies the contents of
 * a file to another file
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int sr, to;
	int v, w;

	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_sr file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	sr = open(argv[1], O_RDONLY);
	v = read(sr, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (sr == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read sr file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, v);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		v = read(sr, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (v > 0);

	free(buffer);
	close_file(sr);
	close_file(to);
	return (0);
}
