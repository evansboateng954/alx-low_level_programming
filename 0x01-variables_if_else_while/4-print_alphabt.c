#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i == 'q' || i == 'e')
			;
		else
		putchar (i);
	putchar ('\n');
	return (0);
}
