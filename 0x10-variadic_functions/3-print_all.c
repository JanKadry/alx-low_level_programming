#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char current;

    va_start(args, format);

    while (format && format[i])
    {
        current = format[i];
        switch (current)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                {
                    printf("(nil)");
                }
                else
                {
                    printf("%s", str);
                }
                break;
            default:
                i++;
                continue;
        }
        
        // Determine if a separator is needed
        if (format[i + 1])
        {
            printf(", ");
        }
        i++;
    }

    printf("\n");
    va_end(args);
}
