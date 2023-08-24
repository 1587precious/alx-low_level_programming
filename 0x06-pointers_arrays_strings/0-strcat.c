#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
*
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int c;
int b;
c = 0;
while (dest[c] != '\0')
{
c++;
}
b = 0;
while (src[b] != '\0')
{
dest[c] = src[b];
c++;
b++;
}
dest[i] = '\0';
return (dest);
}
