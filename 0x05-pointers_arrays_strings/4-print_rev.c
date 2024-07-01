#include "main.h"
/**
 * print_rev - improve in reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
int length = 0;
int x;

while (*s != '\0')
{
length++;
s++;
}
s--;
for (x = length ; x > 0 ; x--)
{
_putchar(*s);
s--;
}
_putchar('\n');

}
