#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints a char
 * @c: The character to print
 * Return: on sucess (1)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 *
 * Description: This program prints the nam of
 * the file it was compiled from
 * Return: Always 0
 */
int main(void)
{
	int i = 0;


	while (__FILE__[i] != '\0')
	{
		_putchar(__FILE__[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
