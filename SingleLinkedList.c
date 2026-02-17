#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL; // implicit
struct node *tmp, *p;

void addNode(int num)
{
    // head
    if (head == NULL)
    {

        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
    }
    else
    {
        // tmp
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }

        p->next = tmp;
    }
}

void display()
{
    p = head;
    while (p != NULL)
    {
        printf(" %d", p->data); // 10 20 30 40 50
        p = p->next;            //
    }
}

int main()
{

    int choice;
    int num;

    while (1)
    {
        printf("\n0 For Exit\n1 For Add\n2 For List\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter numb");
            scanf("%d", &num);
            addNode(num);
            break;
        case 1 + 1:
            display();
            break;
        case 1 - 1:
            exit(1);

        default:
            break;
        }
    }
    return 0;
}

// round -> white
// white - round - fev
// white - round - st
//