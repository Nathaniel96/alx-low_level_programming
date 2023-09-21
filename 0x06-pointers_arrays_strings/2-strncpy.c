#include "main.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: string destination
 * @src: string source.
 * @n: number of string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = *src;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
