#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints a variable number of string
* followed by a newline character.
*
* @separator: The string to be printed between strings
* @n: The number of strings passed to the function.
* @...: The strings to be printed.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *str;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL)
{
if (i != n - 1)
{
printf("%s", separator);
}
}
}

va_end(args);

printf("\n");
}