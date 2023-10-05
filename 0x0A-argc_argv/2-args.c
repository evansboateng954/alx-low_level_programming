#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of command line args
 * @argv:an array of command line args
 * Return: on success 0
 */
int main(int argc,  char *argv[])
{
	int  i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);

}
