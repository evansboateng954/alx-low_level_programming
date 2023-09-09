#include<stdio.h>
/**
 *main - Entry Point
 *Return: Always 0 (sucess)
 */
int main(void)
{
	int i;
	int k;
	int m;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (m = 0; m <= 9; m++)
			{
				for (n = 0; n <=9; n++)
				{
					if (i == m && k == n && m == i && n == k);
					else
					{
						putchar (i + '0');
						putchar (k + '0');
						putchar (' ');
						putchar (m + '0');
                        	                putchar (n + '0');
						putchar (' ');
                                        	putchar (',');
					}
				}
			}
		}
	}
	return (0);
}




