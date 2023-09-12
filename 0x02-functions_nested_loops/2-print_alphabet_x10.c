#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	
	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar (i);
		}
	}
	_putchar ('\n');
	return (0);
}
