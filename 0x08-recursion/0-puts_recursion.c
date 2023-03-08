#include "main.h"

void _puts_recursion(char *s)
/**This function prints a string*/
{
if (*s)
{
    _putchar(*s);
    _puts_recursion(s + 1);
}
else
{
    _putchar('\n');
}
}
