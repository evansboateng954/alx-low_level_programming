#include<stdio.h>
/**
 * main - Entry point
 * This program prints the  number of arguments it recieves
 * Return: 0 is returned
 * @argc: argument count
 * @argv: argument vector
 */
int main(int  argc, char __attribute__((unused)) *argv[])
{
	printf("%d \n", argc - 1);
	return (0);
}
