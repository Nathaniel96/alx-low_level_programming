#include  "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: size of the memeory.
 * Return: Returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
