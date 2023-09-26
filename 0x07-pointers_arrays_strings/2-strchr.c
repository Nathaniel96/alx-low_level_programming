#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 *@s: string locating
 *@c: character to be located
 *Return: c - a pointer to the first occurrence. NULL
 *if the character is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0 ; s[index] >= '\0' ; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
