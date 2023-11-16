#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string whose length to be found
 * @i: counter
 * Return: The length of s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);

	{
	_strlen_recursion(++s);
	++i;
	}

	return (i);
}

