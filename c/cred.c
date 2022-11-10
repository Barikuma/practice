#include "fcntl.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
    user struct data
*/

typedef struct USER
{
    char *name;
    char *password;
}USER;

/*
    function declarations
*/

int _strlen(char *s);

/*
    The main function prompts a user for a name and password
    and stores the user's input in a file user-file.txt.
    If the file doesn't exist, it is created with read, write and append modes
*/

int main(void)
{
    int fd;
    USER user;
    mode_t mode = 0664;

    if ((user.name = malloc(100 * sizeof(char))) == NULL)
        return (-1);
    
    if ((user.password = malloc(100 * sizeof(char))) == NULL)
    {
        free(user.name);
        return (-1);
    }

    printf("Name: ");
    scanf("%s", user.name);
    printf("Password: ");
    scanf("%s", user.password);

    fd = open("user-file.txt", O_RDWR | O_CREAT | O_APPEND, mode);
    if (fd == -1)
    {
        printf("Can't open file");
        return (1);
    }

    write(fd, "Name: ", 6);
    write(fd, user.name, _strlen(user.name));
    write(fd, "    Password: ", 14);
    write(fd, user.password, _strlen(user.password));
    write(fd, "\n", 1);
    close (fd);

    free(user.name);
    free(user.password);
    return 0;
}

/*
    calculates the length of a string
    and returns the length
*/
int _strlen(char *s)
{
    int len = 0;
    while (s[len++]);
    return (--len);
}
