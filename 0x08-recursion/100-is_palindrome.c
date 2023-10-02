/**
 * strlen_palindrome - string length
 * @s: string
 * Return: length of the string
 */

int strlen_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_palindrome(s + 1));
}

/**
 * compare_string - compare each character of the string
 * @s: string
 * @left: smallest iterator
 * @rigth: largest iterator
 * Return: int
 */

int compare_string(char *s, int left, int rigth)
{
	if (*(s + left) == *(s + rigth))
	{
		if (left == rigth || left == rigth + 1)
		{
			return (1);
		}
		return (0 + compare_string(s, left + 1, rigth - 1));
	}
	return (0);
}
/**
 * is_palindrome -  if a string is a palindrome
 * @s: the string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare_string(s, 0, strlen_palindrome(s) - 1));
}
