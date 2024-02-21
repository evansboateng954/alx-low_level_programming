#include "main.h"
/**
 * print_array - prints n elements of array of ints followed by \n
 * @a: the array of ints
 * @n: the number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
