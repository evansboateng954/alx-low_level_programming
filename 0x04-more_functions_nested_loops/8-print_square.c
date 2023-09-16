#include <stdio.h>
#include "main.h"
/**
 * print_square - prints # size by size times
 * @size: number of times to print the $
 */
void print_square(int size)
{
	int i;
	int k;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (size <= 0)
				_putchar ('\n');
			else
				_putchar ('#');
		}
		_putchar ('\n');
	}
	 _putchar ('\n');
}
