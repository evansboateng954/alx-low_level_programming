#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char text[] = "and that piece of art is usefu\" - Dora Korpar, 2015-10-19\n";

	write(1, text, sizeof(message) - 1);
	return (1);
}
