#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: pointer to the resulting srint dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;
	char *ptr;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		;

	ptr = malloc((i + j) * sizeof(char));
	if (!ptr)
		return (NULL);

	for (k = 0; k <= i; k++)
	{
		ptr[k] = dest[k];
	}
	k++;
	while (k <= (i + j))
	{
		j = 0;
		ptr[k] = src[j];
		j++;
	}
	ptr[j] = '\0';
	dest = ptr;
	free(ptr);

	return (dest);
}


