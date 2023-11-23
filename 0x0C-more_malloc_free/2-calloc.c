#include "main.h"
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: the number or blocks to allocate
 * @size: the sizeof block to allicate
 * Return: pointer to the allocated memory
 * if malloc fails return NULL
 * if nmemb or size  = 0 return NULL
 * set memory to 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int  *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);


	if (!ptr || nmemb == 0 || size == 0)
		return (NULL);


	for (i = 0; i < size; i++)
		ptr[i] = 0;

	return (ptr);
}
