#include "function_pointers.h"
/**
 * array_iterator - passes element of an array to
 * a function
 * @array: the array whose member to be passed to the function
 * @size: the size of the array
 * @action: pointer which calls a given function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
