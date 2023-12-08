#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all members of a list
 * @h: The list to be printed
 * if str is NULL print [0] (nil)
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;


	if (!h->str)
	{
		printf("[0] (nil)");
	}


	printf("%d", h->len);
	i++;

	return (i);
}
