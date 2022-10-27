#ifndef LINK_H
#define LINK_H
#include <stdlib.h>

typedef struct list
{
    char *name;
    struct list * next;
}list;

void createList(list **head, char *name);
void insert(list **head, char *name, unsigned int index);
char * locate(list *head, unsigned int index);
void printList(list *head);
#endif