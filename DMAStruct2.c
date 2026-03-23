#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int maths, sci, eng;
};

int main()
{

    struct student *s;
    int choice; 

    start:
        s = malloc(sizeof(struct student));
        printf("enter name and marks of three subjects");
        scanf("%s%d%d%d", &s->name, &s->maths, &s->sci, &s->eng);

        printf("\nDo you want to store more student? 0 : N 1: Y");
        scanf("%d",&choice);

    if(choice == 1){
        goto start;
    }

    //rock 12 12 12 
    printf("name = %s maths = %d sci = %d  eng = %d", s->name, s->maths, s->sci, s->eng);

    return 0;
}