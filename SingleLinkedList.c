#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL; // implicit
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

void addNodeBeg(int data ){
    struct node *tmp; 

    tmp = malloc(sizeof(struct node));  
    tmp->data = data; 
    tmp->next = head; 
    head = tmp; 


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


void removeBEG(){
    
    struct node *tmp = head ;
    head = head->next; 
    free(tmp);

}

int main()
{

    int choice;
    int num;
    int search;
    int flag;
    struct node *p;
    while (1)
    {
        printf("\n0 For Exit\n1 For Add\n2 For List\n3 For Search\n4 for add node BEG \n5 for Remove BEG\nEnter choice");
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
            printf("Enter number that you want to search");
            scanf("%d", &search);//20

            flag = 0;
            p = head;

            while (p != NULL)
            {
                if (p->data == search)
                {
                    flag = 1;
                }
                p = p->next;
            }

            if (flag == 1)
            {
                printf("\nFound");
            }
            else
            {
                printf("\nNot Found");
            }
            break;
            case 4:
                printf("\nEnter num");
                scanf("%d",&num);
                addNodeBeg(num); 
                break;
            case 5:
                removeBEG();
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