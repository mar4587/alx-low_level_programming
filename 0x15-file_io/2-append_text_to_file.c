#include "main.h"
/**
 * append_text_to_file - This appends text at the end of a file
 * @filenlame: the file name
 * @text_content: the string to add
 *
 * Return: 1 or -1
 *
 */
int append_text_to_file(const char *filenlame, char *text_content)
{
	int s, w;
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

	s = open(filenlame, O_WRONLY | O_APPEND);
	w = write(s, text_content, lenl);

	if (s == -1 || w == -1)
		return (-1);

	close(s);
	return (1);
}
