#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checkes for an integer
 * @c: - character to be checked
 * Return: 1 for digit characters and 0 for non digits
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}
