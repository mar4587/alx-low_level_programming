#include "main.h"

/**
 * create_file - This creates a file
 * @filenlame: the file name
 * @text_content: the pointer
 *
 * Return: 1 or -1
 *
 */
int create_file(const char *filenlame, char *text_content)
{
	int p, w;
	int lenl = 0;

	if (filenlame == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lenl = 0; text_content[lenl];)
			lenl++;
	}

	p = open(filenlame, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(p, text_content, lenl);

	if (p == -1 || w == -1)
	{
		return (-1);
	}

	close(p);

	return (1);
}
