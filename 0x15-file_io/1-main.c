#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @ac: Argument count, the number of command-line arguments
 * @av: Argument vector, an array of strings representing the command-line
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
