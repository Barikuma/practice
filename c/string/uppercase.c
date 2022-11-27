#include "main.h"

/*
    toCap - Gets a string and changes all its characters to capital letters
    @s - the string to convert
    return - a pointer to the converted string
*/
char * toCap(char *s)
{
    char *ptr;
    int len = _strlen(s);
    int i = 0;
    ptr = malloc(sizeof(char) * len);

    while (s[i] != '\0')
    {
        if (s[i] >= 97)
            ptr[i] = s[i] - 32;
        else
            ptr[i] = s[i];
        i++;
    }
    *(ptr + len) = '\0';
    return (ptr);
}
