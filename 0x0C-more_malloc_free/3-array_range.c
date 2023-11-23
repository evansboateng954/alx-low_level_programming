#include "main.h"
/**
 * array_range - creates array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: the newly created array
 * or return NULL if malloc fails or if min > max
 * The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int len = 0;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		++len;
	}

	ptr = malloc(len * sizeof(int));

	if (!ptr)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
