#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: the string to reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

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

