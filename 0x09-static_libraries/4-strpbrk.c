#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
        int n;


        while (*s)
        {
                for (n = 0; accept[k]; n++)
                {
                if (*s == accept[n])
                return (s);
                }
        s++;
        }


return ('\0');
}
 
