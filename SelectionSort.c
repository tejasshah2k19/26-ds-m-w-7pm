#include <stdio.h>
#define SIZE 5 

int arr[] = {5,4,3,2,1};

void selectionSort(){
    int i,j,min,tmp;

    for(i=0;i<SIZE;i++){
        min = i; 
        for(j=i+1;j<SIZE;j++){
            if(arr[j] < arr[min]){
                min  = j; 
            }
        }

        if(min != i){
            tmp = arr[min];
            arr[min] =arr[i];
            arr[i]= tmp; 
        }
    }
}

void display(){
    int x;
    printf("\n Array => ");
    for(x=0;x<SIZE;x++){
        printf(" %d",arr[x]);
    }
}

int main()
{

    printf("\nBefore Sort : ");
    display();
    // sorting
    selectionSort();
    // display
    printf("\nAfter Sort : ");
    display();

    return 0;
}