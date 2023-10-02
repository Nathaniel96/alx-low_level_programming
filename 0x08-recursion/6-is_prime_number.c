/**
 *  prime_a -  function that returns 1 if the input integer
 *  is a prime number, otherwise return 0.
 *  @x: inpute number
 *  @y: divisor
 *  Return: 1 for prime or 0 for composite.
 */

int prime_a(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (prime_a(x, y + 1));
}

/**
 * is_prime_number -  if the input integer is a prime number
 * @n: input number
 * Return: 1 for prime or 0 for composite.
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
