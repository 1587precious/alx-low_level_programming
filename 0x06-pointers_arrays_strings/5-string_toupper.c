#include "main.h"
/**
* string_toupper - change all lowercase to uppercase
* @n: pointer
*
* Return: n
*/
char *string_toupper(char *n)
{
int c;
i = 0;
while (n[c] != '\0')
{
if (n[c] >= 'a' && n[c] <= 'z')
n[i] = n[c] - 32;
i++;
}
return (n);
}
