#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int a;

for (a = 0; a < 26; a++)
{
putchar(alp[a]);
}
putchar('\n');
return (0);
}
