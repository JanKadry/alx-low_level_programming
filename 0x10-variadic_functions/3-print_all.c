#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @list: the variadic list
 * @sep: the separator
 */
void print_char(va_list list, char *sep)
{
printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_int - prints an integer
 * @list: the variadic list
 * @sep: the separator
 */
void print_int(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}

/**
 * print_float - prints a float
 * @list: the variadic list
 * @sep: the separator
 */
void print_float(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}

/**
 * print_string - prints a string
 * @list: the variadic list
 * @sep: the separator
 */
void print_string(va_list list, char *sep)
{
	char *str = va_arg(list, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list list;

	void (*func_arr[])(va_list, char *) = {
		print_char,
		print_int,
		print_float,
		print_string
	};

	char format_specifiers[] = {'c', 'i', 'f', 's'};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != format_specifiers[j])
			j++;

		if (j < 4)
		{
			func_arr[j](list, sep);
			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
