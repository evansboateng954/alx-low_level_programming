#include "main.h"
/**
 * _strncpy - copies n bytes of string from source to dest
 * @dest: destination of the string
 * @src: source of the string
 * Return: dest 
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (dest);
}
