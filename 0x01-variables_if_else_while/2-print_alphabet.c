#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar (i + '0');
	putchar ('\n');
	return (0);
}
