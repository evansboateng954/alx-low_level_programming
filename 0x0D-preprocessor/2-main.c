#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the name of the
 * file it was compiled from
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
