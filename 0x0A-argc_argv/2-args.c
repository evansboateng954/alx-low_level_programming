#include<stdio.h>
/**
 * main - Entry point
 * This program prints all the arguments passed to it
 * Return: 0 is returned
 * @argc: argument count
 * @argv: argument vector
 */
int main(int  argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s \n", argv[i]);
		++i;
	}
	return (0);
}
