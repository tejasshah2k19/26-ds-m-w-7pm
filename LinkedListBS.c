#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

void addNode(int num) // 20
{

    if (head == NULL)
    {
        head = malloc(sizeof(struct node)); // data , next
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        struct node *tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{

    struct node *p = head;
    printf("\nAll Node Data => ");
    while (p != NULL)
    {
        printf(" %d ", p->data); // 10 20  30
        p = p->next;
    }
}

void linearSearch(int search)
{
}

void addNodeBeg(int num)
{

    if (head == NULL)
    {
        addNode(num);
        return;
    }
    struct node *tmp = malloc(sizeof(struct node)); //
    tmp->data = 5;
    tmp->next = head;
    head = tmp;
}

struct node *findNode(int search)
{
    struct node *p = head;
    while (p != NULL)
    {

        if (p->data == search)
        {
            return p;
        }
        p = p->next;
    }

    return NULL;
}

void addNodeAny(int src, int num)
{

    // 10 20 30 40 50 NULL
    //                p
    struct node *p = head;
    int found = -1;
    while (p != NULL)
    {

        if (p->data == src)
        {
            found = 1;
            break;
        }
        p = p->next;
    }

    if (found == 1)
    {
        // new node
        struct node *tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = p->next;
        p->next = tmp;
    }
    else
    {
        printf("\nInvalid Source....");
    }
}

void addNodeAny2(int src, int num)
{

    // 10 20 30 40 50 NULL
    //                p
    struct node *p = head;
    int found = -1;
    p = findNode(src);

    if (p != NULL)
    {
        // new node
        struct node *tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = p->next;
        p->next = tmp;
    }
    else
    {
        printf("\nInvalid Source....");
    }
}

void delLast()
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

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);

    display();

    linearSearch(70); // 70 not present
    linearSearch(40); // 40 present

    addNodeBeg(5);
    display();

    addNodeAny(30, -3);

    addNodeAny(-30, 100);

    display();

    delLast();

    display();
    return 0;
}