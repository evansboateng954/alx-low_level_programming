#include "main.h"
/**
* _memset - fills n bytes of memory with a constant string
* @s: The starting point of the block to be filled
* @b: The constant string to fill the block
* @n: the number of bytes to be filledd
* Return: on success 0 is returned
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}
