#include "main.h"

/**
 * largest_number - Finds and returns the largest of three numbers.
 * @a: The first integer to compare.
 * @b: The second integer to compare.
 * @c: The third integer to compare.
 * Description: Given three integers, this function compares them and
 * returns the largest one. If two or more integers are equal and larger
 * than the other(s), the function will return that integer.
 * Return: The largest integer among a, b, and c.
 */



int largest_number(int a, int b, int c)

{ int largest;

if (a > b && a > c)

{ largest = a;
return (a);
}
else if (b > c && b > a)

{

largest = b;
return (b);
}
else if (c > b)

{
largest = c;
return (c);
}

else

{ largest = b;

return (largest);
}
}
