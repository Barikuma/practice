#include "main.h"

/*
    toTitle - Gets a string and changes all the first letters of a word to uppercase
    @s - the string to change
    return - a pointer to the converted string
*/
char * toTitle(char *s)
{
    char *ptr;
    int len = _strlen(s);
    int i = 0;

    ptr = malloc(sizeof(char) * len);

    while (s[i] != '\0')
    {
        // if the first letter is lowercase
        if ((i == 0) && (s[i] >= 97 && s[i] <= 122))
        {
            ptr[i] = s[i] - 32;
        }
        // if the current letter is uppercase and not after a space
        else if ((s[i] >= 65 && s[i] <= 90) && s[i - 1] != ' ')
        {
            ptr[i] = s[i] + 32;
        }
        // if the current letter is lowercase and is after a space
        else if ((s[i] >= 97 && s[i] <= 122) && s[i - 1] == ' ')
        {
            ptr[i] = s[i] - 32;
        }
        else
        {
            ptr[i] = s[i];
        }
        i++;
    }
    // add a null character to the end of the string
    *(ptr + len) = '\0';

    return ptr;
}
