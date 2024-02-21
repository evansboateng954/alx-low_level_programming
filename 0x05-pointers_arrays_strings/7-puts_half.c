#include "main.h"
/**
 * puts_half - prints the last half of a string followed by a newline
 * @str: pointer to the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	i = _strlen(str) / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
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

