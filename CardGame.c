#include<stdio.h>
#include<stdlib.h>

#define MAX 52

int totalCards; //10 

int playerA[MAX]; 
int playerB[MAX]; 


void init(){

    int i; 
    totalCards = 10; 
 
    for(i=0;i<totalCards/2;i++){
        playerA[i] = rand()%100; 
    }
    
    
    for(i=0;i<totalCards/2;i++){
        playerB[i] = rand()%100; 
    }
    

}

void display(){
    int i;

    printf("\nPlayerA => ");
    for(i=0;i<totalCards/2;i++){
        printf(" %d ",playerA[i]);
    }


    printf("\nPlayerB => ");
    for(i=0;i<totalCards/2;i++){
        printf(" %d ",playerB[i]);
    }
}

void gamePlay(){
    int i; 
    int a = playerA[0];
    int b = playerB[0]; 


    //playerA , playerB 1st card remove 
    printf("\n\nRound 1 Start ");
    for(i=0;i<totalCards/2;i++){
        playerA[i] = playerA[i+1];
    }
    playerA[totalCards/2-1] = -1;
    
    for(i=0;i<totalCards/2;i++){
        playerB[i] = playerB[i+1];
    }
    playerB[totalCards/2-1] = -1;

    display(); 

    if(a > b){
        printf("\nPlayer A win the Round");
    }else{
        printf("\nPlayer B win the Round");
    }

}

int main(){

    init(); 
    printf("initial Game : ");
    display();
    gamePlay(); 


    return 0;
}