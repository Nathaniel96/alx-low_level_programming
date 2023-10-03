#include <stdio.h>

/**
 * main -  program that prints all arguments it receives.
 * @argc: number of CL args..
 * @argv: array CL of the args..
 * Return: 0 at it success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
