#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			putchar (i + '0');
			putchar (j + '0');
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
