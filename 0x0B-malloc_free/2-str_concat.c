#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: The first string to be printed
 * @s2: The second string appended to s1
 * Return: pointer to the newly allcated space
 *  or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len;
	int k = 0;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		len++;
	}

	/*allocating the new space */
	ptr = (char *) malloc((len + 1) * sizeof(char));

	if (len == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (s1[i] == '\0')
		{
			ptr[i] = s2[k];
			k++;
		}
		else
		{
			ptr[i] = s1[i];
		}
	}
	return (ptr);
}
















































































































































































