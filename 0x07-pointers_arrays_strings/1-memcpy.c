#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: destination of the memory
 * @src: source of thr memory
 * @n: function copies
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
