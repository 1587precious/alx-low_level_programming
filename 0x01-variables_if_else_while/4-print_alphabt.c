#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int p;

for (p = 97; p < 123; p++)
{
if (p != 101 && p != 113)
{
putchar(p);
}
}
putchar('\n');
return (0);
}
