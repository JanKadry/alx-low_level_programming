#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}

	for (num = 0; num < 6; num++)
	{
		putchar('a' + num);
	}

	putchar('\n');

	return (0);
}
