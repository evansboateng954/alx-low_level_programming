#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the filename it was compiled from
 * Return: on sucess 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
