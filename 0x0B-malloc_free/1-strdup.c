#include "main.h"
/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: the string to be copied
 * Return: pointer to the new string or NULL if malloc fails
 */

char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *ptr;

	while (*(str + len) != '\0')
	{
		len++;
	}



	ptr = (char *) malloc(sizeof(char) * len + 1);

	if (!ptr)
		return (NULL);

	for (i = 0; i < len; i++)
		{
		ptr[i] = str[i];

		}

	ptr[len] = '\0';
	return (ptr);
