#include <stdio.h>
#include <stdlib.h>

void singleVariable()
{

    // input a number from user and print.
    int *a;                  // int a
    a = malloc(sizeof(int)); // tc:2 , gcc:4
    printf("Enter value");
    scanf("%d", &a);
    printf("\nA = %d", a);
}

void arrayDemo()
{

    int *a; // int a[5];
    int i;

    a = calloc(5, sizeof(int));//20 byte -> a -> base address -> 1st
    // take 5 numbers from user and print
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter value");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n%d : %u", a[i],&a[i]);
    }
}

int main()
{
    arrayDemo();
    return 0;
}