
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
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (b < n && src[j] != '\0')
{
dest[c] = src[b];
i++;
j++;
}
dest[c] = '\0';
return (dest);
}
