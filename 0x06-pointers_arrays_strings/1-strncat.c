#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int c;
int b;
c = 0;
while (dest[c] != '\0')
{
c++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[c] = src[b];
c++;
b++;
}
dest[c] = '\0';
return (dest);
}

