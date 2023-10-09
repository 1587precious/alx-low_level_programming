#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char pc;

for (pc = 'z'; pc >= 'a'; pc--)
{
putchar(pc);
}
putchar('\n');
return (0);
}


