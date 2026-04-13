#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // address store
    struct node *prev; // address store
};

struct node *head = NULL;
struct node *last = NULL;

void addNode(int num)
{

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {

        struct node *tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        tmp->prev = last;
        last->next = tmp;
        last = tmp;
    }
}

int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);


    return 0;
}