#include <stdio.h>
#include "main.h"

/**
 *print_line -prints _ ntimes
 *@n: number of times _should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar ('\n');
		else
			_putchar ('_');
	}
	_putchar ('\n');
}
