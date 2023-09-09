#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar (i + '0');
			putchar (j + '0');
