#include "main.h"
/**
 * *string_toupper - reverse array of integers
 * @n: number of elements of array
 * Return: n
 */




char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
	if (n[i] >= 'a' && n[i] <= 'z')
	n[i] = n[i] - 32;
	i++;

}
return (n);
}
