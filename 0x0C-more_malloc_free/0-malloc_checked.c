#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: The number of bytes to allocate
 * Return: pointer to the allocated memory
 * if malloc fails,terminate with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
