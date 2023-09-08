#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, text, sizeof(text) - 1);
	return (1);
}
