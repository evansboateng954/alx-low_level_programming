#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of command line args
 * @argv:an array of command line args
 * Return: on success 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int args;

	args = argc;
	printf("%d \n", args);
	return (0);
}
