#include "main.h"
/**
 * puts2 - prints the next 2 chars till endl starting from the first
 * @str: pointer to the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

