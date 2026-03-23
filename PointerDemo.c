#include<stdio.h>


int main(){

    int a;// 
    int *p; 
    int **q; 

    a = 20; 
    p = &a;//400
    q = &p; 
    
    printf(" %d ",a);
    printf(" %u ",p);
    printf(" %u ",&a);

    printf(" %u ",&p);
    
    printf(" %u",*p); // value at 400 ---> 20    
    printf(" %d",*p);// 20 
    


    return 0; 
}