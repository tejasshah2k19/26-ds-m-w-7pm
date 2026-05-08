#include<stdio.h>


int graph[4][4];

void input(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\n%d connected %d ? ",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
}


void printNeighbour(int vertex){
    int j;

    printf("\nNeighbour of %d => ",vertex);
    for(j=0;j<4;j++){
        if(graph[vertex][j] == 1){
            printf(" %d ",j);
        }
    }
}

int main(){


    input();
    printNeighbour(3);
    return 0; 
}