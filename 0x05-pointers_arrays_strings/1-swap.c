#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: the first int
 * @b: the second integer to swap
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
