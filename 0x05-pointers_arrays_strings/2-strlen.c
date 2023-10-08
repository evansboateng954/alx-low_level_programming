#include "main.h"
/**
 * _strlen - returns the length of a string excluding the mull terminating char
 * @s: pointer to the string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

