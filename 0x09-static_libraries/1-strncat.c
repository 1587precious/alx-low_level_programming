1-strncat.c


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
        int 0;
        int 0;


        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (j < n && src[j] != '\0')
        {
        dest[i] = src[j];
        i++;
i        j++;
        }
        dest[i] = '\0';
        return (dest);
}
 
  
