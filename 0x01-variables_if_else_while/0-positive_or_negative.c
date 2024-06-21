#include <stdlib.h>
#include <time.h>
#include <stdio.h>  // Needed to use printf function

int main(void)
{
    int n;

    srand(time(0));         // Initialize random seed
    n = rand() - RAND_MAX / 2; // Assign random value to n

    // Check if n is positive, negative, or zero and print accordingly
    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n == 0) {
        printf("%d is zero\n", n);
    } else {
        printf("%d is negative\n", n);
    }

    return (0);
}
