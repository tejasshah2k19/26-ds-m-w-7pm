#include <stdio.h>
#define SIZE 6

int i, j, tmp;
int arr[] = {5,4,3,2,1,-1};

void display()
{
    int x;
    for (x = 0; x < SIZE; x++)
    {
        printf(" %d", arr[x]);
    }
}


void bubbleSort()
{
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
        printf("\n Pass %d : ",i+1);//Pass 1:  
        display();//array print 
    }
}


int main()
{

    printf("\nBefore Sort : ");
    display();
    // sorting
    bubbleSort();
    // display
    printf("\nAfter Sort : ");
    display();
    return 0;
}