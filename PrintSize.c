#include<stdio.h>


int main(){

    char arr[3]; 
    int x; 
    char z; 

    // & => address of 
 
    printf("\n %u ",&arr[0]);
    printf("\n %u ",&arr[1]);
    printf("\n %u ",&arr[2]);
    printf("\n %u ",&x);

    //operator 

    printf("\n int => %d ",sizeof(int));
    printf("\n float => %d ",sizeof(float));
    printf("\n char => %d ",sizeof(z));
    

    //


    return 0;
}