#include "main.h"
#include <stdio.h>
/**
 * sqrt_a -  returns the natural square root of a number.
 * @n: number to calculate the square root
 * @i: the iterator
 * Return: square root or -1
 */

int sqrt_a(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_a(x, y + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *@n: number to calculate the square root
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
