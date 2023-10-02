#include "main.h"

/**
 * read_textfile- This reads the  text file print to STDOUT
 * @filename: the text file
 * @letters: the number of letters
 *
 * Return: nb
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t h, nb, t;

	h = open(filename, O_RDONLY);
	if (h == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(h, buf, letters);
	nb = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(h);

	return (nb);
}
