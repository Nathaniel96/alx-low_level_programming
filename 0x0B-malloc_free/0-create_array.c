#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: input for the size of the array in int
 * @c: the string character.
 * Return: a pointer to character c.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
