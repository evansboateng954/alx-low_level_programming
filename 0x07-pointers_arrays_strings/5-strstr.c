#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to locate
 *Return: if found ,pointer to the begining of the substring
 *otherwise return null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i++] == '\0')
					return (haystack);
				i++;
			} while
			(haystack[i] == needle[i]);
		}
	haystack++;
	}
	return ('\0');
}

