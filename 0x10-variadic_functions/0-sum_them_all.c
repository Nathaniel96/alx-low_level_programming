#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: number of argument to be passed to sum.
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list par_holder;

	va_start(par_holder, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
			sum = sum + va_arg(par_holder, const unsigned int);
	}
	va_end(par_holder);
	return (sum);
}
