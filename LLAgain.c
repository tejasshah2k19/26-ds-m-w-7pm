#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

void addNode(int data)
{

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        last = head;
    }
    else
    {
        struct node *tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void addNodeBeg(int data)
{

    if (head == NULL)
    {
        addNode(data);
    }
    else
    {
        struct node *tmp = malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = head;
        head = tmp;
    }
}

// src -> search
// after -> data
void addNodeAny(int src, int data)
{
    if (head == NULL)
    {
        addNode(data);
    }
    else if (last->data == src)
    {
        addNode(data);
    }
    else
    {
        // search
        struct node *p = head;

        while (p != NULL)
        {
            if (p->data == src)
            {
                break;
            }
            p = p->next;
        }

        if (p == NULL)
        {
            printf("\nInvalid Source please try again !!");
        }
        else
        {
            struct node *tmp = malloc(sizeof(struct node));
            tmp->data = data;
            tmp->next = p->next;
            p->next = tmp;
        }
    }
}

void deleteNode()
{
    struct node *p = head;

    while (p->next != last)
    {
        p = p->next;
    }
    p->next = NULL;
    free(last);
    last = p;
}

void deleteBeg()
{
    struct node *p = head;
    head = head->next;
    free(p);
}

void deleteAny(int src)
{

    if (head->data == src)
    {
        deleteBeg();
    }
    else if (last->data == src)
    {
        deleteNode();
    }
    else
    {

        struct node *p = head;

        while (p != NULL)
        {
            if (p->next != NULL && p->next->data == src)
            {
                break;
            }
            p = p->next;
        }

        if( p == NULL){
            printf("\n Invalid Source : ");
        }else{
            p->next = p->next->next;
            free(p->next);
        }
    }
}

void display()
{
    struct node *p = head;

    printf("\n");
    while (p != NULL)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
}

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    display();
    addNodeBeg(5);
    display();

    addNodeAny(3, 33);
    addNodeAny(40, 50);
    addNodeAny(30, 35);

    display();
    return 0;
}