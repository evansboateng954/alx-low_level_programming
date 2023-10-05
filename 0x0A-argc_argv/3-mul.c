#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of command line args
 * @argv:an array of command line args
 * Return: on success 0
 */
int main(int argc,  char *argv[])
{
	int  res;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;
	printf("%d \n", res);
	return (0);

}
