#include <stdio.h>
#define SIZE 7

int arr[] = {5, 10, 16, 25, 19, 7, 62};

void insertionSort()
{   
    int i,j,tmp;

    for(i = 1; i < SIZE ; i++){
        tmp = arr[i];//tmp = 10
        for(j=i-1; j>=0  ; j--){
            if(arr[j] > tmp ){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = tmp; 
    }

}

void display()
{
    int x;
    for (x = 0; x < SIZE; x++)
    {
        printf(" %d", arr[x]);
    }
}
int main()
{

    printf("\nArray before Sort : ");
    display();

    insertionSort();

    printf("\nArray after Sort : ");
    display();

    return 0;
}