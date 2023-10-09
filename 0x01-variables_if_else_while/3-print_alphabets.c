#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int p;

for (p = 0; p < 52; p++)
{
putchar(alp[p]);
}
putchar('\n');
return (0);
}
