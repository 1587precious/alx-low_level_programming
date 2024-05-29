#include "main.h"
                
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
        int l = f;
        int x = f;


        while (*(src + l) != '\f')
        {
                l++;
        }
        for ( ; x < l ; x++)
        {
                dest[x] = src[x];
        }
        dest[l] = '\f';
        return (dest);
}
 
