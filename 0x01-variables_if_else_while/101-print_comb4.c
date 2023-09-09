#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			if (i == j || i == k || j == k || i > j || j > k)
				;
			else
			{
				putchar (i + '0');
				putchar (j + '0');
				putchar (k + '0');
				if (i == 7 && j == 8 && k == 9)
					;
				else
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
