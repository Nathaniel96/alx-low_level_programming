#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal.
 *@n: parameter checked
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (n = 0 ; i < 0 ; i++)
			putchar('_');
		putchar('\n');
	}
}
