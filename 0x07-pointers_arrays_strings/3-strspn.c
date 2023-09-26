#include "main.h"
/**
 * @s: the string main string
 * @accept: the substring
 * _strspn - gets the length of a prefix substring
 *Return - always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int n;
	unsigned int val;
	unsigned int check;

	val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (n = 0; accept[n] !='\0'; n++)
		{
			if (accept[n] == s[i])
			{
				val++;
				check = 1;
			}
		}
	}
}
