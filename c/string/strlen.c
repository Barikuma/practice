#include "main.h"

/*
    _strlen - calculates the number of characters in a string
    @s - the string to count
    return - the length of the string
*/
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;
    
    return (len);
}