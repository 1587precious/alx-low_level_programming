#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int a;


        a = 0;
        while (a < n && src[a] != '\0')
        {
                dest[a] = src[j];
                j++;
        }
        while (j < n)
        {
                dest[a] = '\0';
                a++;
        }


        return (dest);
}
 
 
