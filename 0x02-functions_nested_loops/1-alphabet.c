#include "main.h"

/**
 * main - main function printed alphabets in a lowercase
 * Result: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
