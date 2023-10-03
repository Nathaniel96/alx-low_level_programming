#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers.
 * @argc: number of the CL args..
 * @argv: arrays of the CL args..
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
