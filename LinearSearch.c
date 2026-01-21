#include <stdio.h>
#define SIZE 5

void linearSearch(int arr[], int search)
{
    int found = -1; // not present
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == search)
        {
            printf("\n%d Found at %d location", search, i + 1);
            found = 1;
            break;
        }
    }
    if (found == -1)
    {
        printf("\nElement Not found");
    }
}

int main()
{

    int a[] = {10, 20, 20, 40, 50};
    int search;
    int num = 20;

    printf("Enter search data: ");
    scanf("%d", &search); // 25

    linearSearch(a, search);
    
    
    countNumber(a,num);  //num=>20   2 
    countNumber(a,num);  //num=>100  0
    countNumber(a,num);  //num=>40   1
     
    
    
    // q2
    // found -> 1
    // found -> -1

    //25 can be at 3 location 


    /*
        i               search
        0   a[i] : 10   30
        1        : 20   30
        2        : 30   30
        3
        4


    */

    return 0;
}