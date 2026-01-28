#include <stdio.h>
#define SIZE 13

int main()
{

    int arr[] = {10, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75};
    int min, max, mid;
    int search = 750;
    int found =0; //

    min = 0;
    max = SIZE - 1;

    while (min <= max)
    {
        mid = (min + max) / 2;

        if (arr[mid] == search)
        {
            printf("Num Found");
            found = 1;
            break;
        }
        else if (search > arr[mid])
        {
            // right
            min = mid + 1;
        }
        else if (search < arr[mid])
        {
            // left
            max = mid - 1;
        }
    }

    if(found == 0){
        printf("Num Not found");
    }
    return 0;
}