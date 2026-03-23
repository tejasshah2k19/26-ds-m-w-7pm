#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int age;
    struct student *next;
};

struct student *head = NULL;
struct student *t = NULL;
struct student *last = NULL;

void addStudent()
{

    //
    if (head == NULL)
    {
        head = malloc(sizeof(struct student)); // name age  next
        printf("\nEnter name and age");
        scanf("%s%d", &head->name, &head->age);
        head->next = NULL;
        last = head;
    }
    else
    {

        t = malloc(sizeof(struct student));
        printf("\nEnter name and age");
        scanf("%s%d", &t->name, &t->age);
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int main()
{

    int choice;

    while (-1)
    {
        printf("\n0 For Exit");
        printf("\n1 For Add student");
        printf("\n2 For Display");
        printf("\nEnter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            addStudent();
            break;
        case 2:
            printf(" %s ",s->name);
            printf(" %s ",s->next->name);
            printf(" %s ",s->next->next->name);
            printf(" %s ",s->next->next->next->name);
            
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }



    return 0;
}