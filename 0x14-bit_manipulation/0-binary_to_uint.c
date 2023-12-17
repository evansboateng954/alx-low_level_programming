#include <stdio.h>
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to a bit string
 * Return: The number in int or 0 if b is NULLL
 * or there is a non-binary character
 */
unsigned int binary_to_uint(const char *b)
{
	int res = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res << 1) + (*b - '0');
		b++;
	}

	return (res);
}
