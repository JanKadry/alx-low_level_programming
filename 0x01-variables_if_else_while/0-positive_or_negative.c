#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether number n is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n; /* Variable to store the random number */

	srand(time(0)); /* random seed based on current time */
	n = rand() - RAND_MAX / 2; /* Assign random value to n within full range */

	/* Determine whether n is positive, negative, or zero */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
