#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{

    struct node *head = NULL; // implicit
    struct node *tmp;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = 20;
    tmp->next = NULL;
    head->next = tmp;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = 30;
    tmp->next = NULL;
    head->next->next = tmp;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = 40;
    tmp->next = NULL;
    head->next->next->next = tmp;


    printf("%d %d %d %d",head->data,head->next->data,head->next->next->data,head->next->next->next->data);

    return 0;
}

// round -> white
// white - round - fev
// white - round - st
//