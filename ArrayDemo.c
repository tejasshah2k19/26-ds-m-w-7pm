#include <stdio.h>

int a[5];// 0 0 0 0 0 
int i;// 0 

void input()
{
    int x;// g.v  
    for (i = 0; i < 5; i++)
    {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }
}


void insert(int location,int value){

}

void display()
{
    printf("Elements in the Array : ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }
}

int main()
{

    display();

    return 0;
}