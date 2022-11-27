#include "main.h"

/*
    _strcpy - copies a string to another
    @src - the string to copy
    @des - the memory location to copy the string to
*/
void _strcpy(char *src, char *des)
{
        int i = 0;
        int n = _strlen(src);

        while (i < n && src[i] != '\0')
        {
                des[i] = src[i];
                i++;
        }

        *(des + n) = '\0';
}
