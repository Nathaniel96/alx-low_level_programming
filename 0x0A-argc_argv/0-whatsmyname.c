#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of CL arguments.
 * @argv: array contains CL arg...
 * Return: always 0. when successful.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
