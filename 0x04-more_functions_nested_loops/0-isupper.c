#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: - the character to check
 * Return:  1 for uppercase character 0 for non uppercase character
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
