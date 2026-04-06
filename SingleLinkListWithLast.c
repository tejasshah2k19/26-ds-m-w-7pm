#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL; // implicit
struct node *last = NULL;

struct node *tmp, *p;

// 80 10 20 30 90 40 50 60 70
// addNodeEnd
// addNodeBeg
// addNodeAny
// deleteNodeEnd
// deleteNodeBeg
// deleteNodeAny
// display

void addNode(int num)
{
    // head
    if (head == NULL)
    {

        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = head;
        last = head;
    }
    else
    {
        // tmp
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{
    p = head;
    while (p != NULL)
    {
        printf(" %d", p->data); // 10 20 30 40 50
        p = p->next;
    }
}

void addNodeBeg(int num)
{
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = head;
    head = tmp;
}

void search(int num)
{
    //  10  20  30  40  50
    //  p
    int found = 0; // not
    p = head;

    while (p != NULL)
    {

        if (p->data == num)
        {
            found = 1;
        }
        p = p->next;
    }

    if (found == 1)
    {
        printf(" Present");
    }
    else
    {
        printf(" Not Present");
    }
}

void countNode()
{
    p = head;
    int count = 1;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    printf("\nTotal Node = %d", count);
}

void addNodeAny(int src, int num)
{
    int found = 0; // not
    p = head;

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
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = p->next;
        p->next = tmp;
    }
    else
    {
        printf(" Invalid Source...");
    }
}

void delBeg()
{
    p = head;
    head = head->next;
    free(p);
}

void delEnd()
{

    p = head;

    while (p->next->next != NULL)
    {
        p = p->next;
    }

    // q = p->next; //if no last

    p->next = NULL;
    free(last); // free(q);
    last = p;
}

void deleteAny(int num)
{
    // 60 10 20 30 40 50 70
    // head              last
    //       p
    int found = 0;
    struct node *p;
    if (head->data == num)
    {
        delBeg();
    }
    else if (last->data == num)
    {
        delEnd();
    }
    else
    {
        // 30
        // 300
        p = head;

        while (p != NULL)
        {
            if (p->next->data == num)
            {
                found = 1;
                break;
            }
            p = p->next; 
        }

        if(found == 1){
            //delete 
            p->next = p->next->next; 
        }else{
            printf("\nInvalid Source ");
        }
    }
}

int main()
{

    int choice;
    int num;
    int src;

    while (1)
    {
        printf("\n0 For Exit\n1 For Add END\n2 For List\n3 For Add BEG\n4 for Add Any:after\n5 For Delete Beg\n6 for Delete End\n7 For Delete Any\nEnter choice");
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
        case 3:
            printf("\nEnter numb");
            scanf("%d", &num);
            addNodeBeg(num);
            break;
        case 4:
            printf("\nEnter Source and Number");
            scanf("%d", &src);
            scanf("%d", &num);
            addNodeAny(src, num);
            break;
        case 5:
            delBeg();
            break;
        case 6:
            delEnd();
            break;
        case 7:
            printf("\nEnter the number that you want to delete? ");
            scanf("%d", &num);
            deleteAny(num);
            break;
        default:
            break;
        }
    }
}
// round -> white
// white - round - fev
// white - round - st
//