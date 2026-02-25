#include <stdio.h>
#define S1 5
#define S2 5
#define S3 10

// int a[] = {10, 20, 30, 40, 50};
// int b[] = {5, 15, 25, 35, 45};
// int c[S3];



int a[] = {10, 20, 30, 40, 50};
int b[] = {15, 55, 65, 75, 85};
int c[S3];

void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}

void mergeSort()
{

    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < S1 && j < S2)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    //
    while(i < S1){
        c[k] = a[i];
        i++;
        k++; 
    }
    
    while(j < S2){
        c[k] = b[j];
        j++;
        k++; 
    }
}

int main()
{

    printf("a => ");
    display(a, S1);

    printf("\nb => ");
    display(b, S2);

    printf("\nc => ");
    display(c, S3);

    mergeSort();

    printf("\nc => ");
    display(c, S3);

    return 0;
}