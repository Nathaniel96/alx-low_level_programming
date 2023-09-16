#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 * @c: parameter checked
 * Return: 1 when successful, 0 not successfuel.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
