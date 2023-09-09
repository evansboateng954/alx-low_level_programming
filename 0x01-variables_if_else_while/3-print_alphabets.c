#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	char  i;

	for (i = 97; i <= 122; i++)
		putchar (i + '0');
	
	for (i = 65; i <= 90; i++)
                putchar (i + '0');
	putchar ('\n');
	return (0);
}
