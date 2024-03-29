#include "main.h"
/**
 * _strpbrk - searches for a set of bytes in a given string
 * @s: the string to search for
 * @accept: the set of bytes to search for
 * Return: s if a set of bytes is found
 * return NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');

}


