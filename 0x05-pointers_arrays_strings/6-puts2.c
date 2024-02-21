#include "main.h"
/**
 * puts2 - prints the next 2 chars till endl starting from the first
 * @str: pointer to the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str);

	while (i < len)
	{
		_putchar(*str);
		str += 2;
		i += 2;
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

