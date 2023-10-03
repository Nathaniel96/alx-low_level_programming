#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of the CL arguments
 * @argv: array of the CL args..
 * Return: 0 when it is success.
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
