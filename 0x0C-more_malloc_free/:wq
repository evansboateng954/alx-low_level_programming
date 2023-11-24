#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: The first string
 _* @s2: the string appended to s1
 * @n: the number of bytes of s2 to be appended
 * Return: pointer to a newly allocated space
 * return null on failure
 * treat NULL as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len = 0;
	char *ptr;

        /* get the len of s1 */

	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}

	/* Allocating space for concatenation */
	ptr = malloc((len + n + 1) * sizeof(char));

	if (!ptr)
		return (NULL);
	for (i = 0; i <= len ; i++)
	{
		if (s1[i] == '\0')
		{
			s1[i] = " ";
		}
		ptr[i] = s1[i];
	}

	for (i = 0; i < n; i++)
