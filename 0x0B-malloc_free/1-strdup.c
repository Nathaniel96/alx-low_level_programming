#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * in memory,which contains a copy of the string given as a parameter.
 * @str: initial input string
 * Return: pointer to memory allocated as array of char..
 */

char *_strdup(char *str)
{
	size_t i, j;
	char *strout;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
	{
		return (NULL);
	}

	for (j = 0 ; j <= i ; j++)
	{
		strout[j] = str[j];
	}
	return (strout);
}
