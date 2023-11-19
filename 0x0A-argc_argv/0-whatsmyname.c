#include<stdio.h>
/**
 * main - Entry point
 * This program prints its name
 * Return: 0 is returned
 * @argc: argument count
 * @argv: argument vector
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s \n", argv[0]);
	}
	else
	{
	}
	return (0);
}
