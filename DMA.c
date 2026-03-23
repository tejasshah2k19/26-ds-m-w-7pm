#include<stdio.h>
#include<stdlib.h>


int main(){

    int *p; 
    int *arr;
    int xarray[5]; //5 block --> 4 byte : total 20 byte 
    // p = malloc(4);
    
    p = malloc(sizeof(int));//4 byte block 
    arr = calloc(5,sizeof(int));//5 block -> 4 byte : total 20 byte 
    
    //pf
    printf("Enter value");
    scanf("%d",&p);
    printf("\n p = %d ",p);
    //sf 
    //pf 

    //array 

    //xarray 
    //case 1: xarray->5 -> 10 20 30 40 50 
    //case 2: xarray->2 -> 10 20  X X X : 12 byte : -- 
    //case 3: xarray->7 -> 10 20 30 40 50 | 60 70 : ++ 


    //arr 
    //case 1: arr->5 -> 10 20 30 40 50 
    //case 2: arr->2 -> 10 20 X X X | free - realloc --
    //case 3: arr->7 -> 10 20 30 40 50 | realloc {7} 60 70 
     
    //ArrayList -> 
}