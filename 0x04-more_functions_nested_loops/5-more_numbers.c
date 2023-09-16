#include <stdio.h>
#include "main.h"

/**
 *more_numbers - prints numbers from 0 - 9
 */

void more_numbers(void)
{
	int i;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			_putchar (k + '0');
		}
		_putchar ('\n');
	}

	_putchar ('\n');
}
