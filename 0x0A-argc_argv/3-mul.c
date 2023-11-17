#include<stdio.h>
/**
 * main - Entry point
 * This program multiplies two args
 * Return: 1 if args is not 2
 * @argc: argument count
 * @argv: argument vector
 */
int main(int  argc, char *argv[])
{
		if (argc != 2)
		{
			printf("Error \n");
			return (1);
		}
		else
			printf("%d \n", argv[1] * argv[2]);
	return (0);
}
