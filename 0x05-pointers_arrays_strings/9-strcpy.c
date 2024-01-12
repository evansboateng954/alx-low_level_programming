#include "main.h"
/**
 * _strcpy - copies the contents of src to dest
 * @src: source string
 * @dest: destination of the string
 * Return: the value pointed to by dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (!src)
		return (NULL);

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}
