#include"main.h"
/**
 * _strlen_recursion - prints the length of a string
 *@s: pointer to a character to be counted
 *Return: always the length of a string
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s == '\0')
	{
		return (counter);
	}
	else
	{
		counter++;
		_strlen_recursion(s++);
	}
	return (counter);
}
