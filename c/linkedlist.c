#include <stdio.h>
#include "link.h"

int main(void)
{
    list *head;

    head = NULL;

    createList(&head, "first node");
    createList(&head, "second node");
    printList(head);
    insert(&head, "inserted node", 1);
    printf("----------------------\nafter insert\n----------------------\n");
    printList(head);
    return 0;
}

/*
    prints out the element at the given index
*/
char * locate(list *head, unsigned int index)
{
    if (head == NULL)
    {
        if (index >= 0)
        {
            printf("Index out of range\n");
            return NULL;
        }
        printf("Empty list\n");
        return NULL;
    }
    if (index == 0) return head->name;
    return (locate(head->next, index - 1));
}
/*
    inserts a new node at a given index
*/
void insert(list **head, char *name, unsigned int index)
{
    list *new_node, *current;

    if ((new_node = malloc(sizeof(list))) == NULL) return NULL;
    new_node->name = name;
    current = *head;

    if (*head == NULL)
    {
        if (index != 0)
        {
            printf("\nIndex out of range\n");
            return;
        }
        *head = new_node;
        new_node->next = NULL;
    }
    else if (*head != NULL && index == 0)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        while (index-- > 1)
        {
            current = current->next;
            if (current == NULL)
            {
                printf("\nIndex out of range\n");
                return;
            }
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

/*
    creates a new node at the end of a linked list
*/
void createList(list **head, char *str)
{
    list *newNode, *ptr;
    
    if ((newNode = malloc(sizeof(list))) == NULL) return NULL;

    newNode->name = str;
    newNode->next = NULL;
    ptr = *head;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        while (ptr->next)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

/*
    prints the elements of a linked list
*/
void printList(list *head)
{
    if (head == NULL) 
    {
        printf("NULL\n");
        return;
    }
    while (head)
    {
        printf("%s\n", head->name);
        head = head->next;
    }
}