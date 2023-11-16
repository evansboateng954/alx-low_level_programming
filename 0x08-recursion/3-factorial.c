#include "main.h"
/**
 * factorial - returns n!
 * @n: the number whose factorial to be found
 * Return: -1 if n < 0 , else return n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		n = 1;
	}
	else
	{
		;
	}
	return (n * factorial(--n));
}
