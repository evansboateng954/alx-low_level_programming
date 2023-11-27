#include <stdio.h>
#include "main.h"

/**
 * This program prints the name of the file it 
 * was compiled from
 * Main - Entry point
 * Return: on sucess (1)
 */

int main()
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
