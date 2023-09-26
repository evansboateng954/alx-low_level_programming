#include "main.h"
/**
 * _strchr - finds the first occurence of a given chracter
 * @s: the string to search for
 * @c: the character to search for
 * Return: on success (s)
 * on error null is returned
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}



