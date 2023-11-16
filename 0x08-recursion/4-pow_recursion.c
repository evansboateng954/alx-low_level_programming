#include "main.h"
/**
 * _pow_recursion - returns x ^ y
 * @x: The base number
 * @y: The exponent
 * Return: (-1) if y < 0.Else return x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		y = 1;
		return (y);
	}
	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
