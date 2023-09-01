#include "main.h"
/**
 * *_strstr - This locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: s
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *p = needle;

		while (*a == *p && *p != '\0')
		{
			a++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
