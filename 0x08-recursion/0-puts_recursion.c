#include "main.h"

/**This function prints a string*/
void _puts_recursion(char *s)
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
