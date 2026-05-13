#include <stdio.h>
#include <stdlib.h>

struct edge
{
    int src;
    int dest;
    int cost;
};

int totalEdges;
struct edge *e;

int main()
{

    int i;
    int src, dest, cost;
    printf("how many edges you have? ");
    scanf("%d", &totalEdges);    // 4
    totalEdges = totalEdges * 2; //

    e = calloc(totalEdges, sizeof(struct edge));

    for (i = 0; i < totalEdges; i++)
    {
        printf("Enter source destination and cost");
        scanf("%d%d%d", &src, &dest, &cost);
        e[i].src = src;
        e[i].dest = dest;
        e[i].cost = cost;
        i++;
        e[i].src = dest;
        e[i].dest = src;
        e[i].cost = cost;
    }

    printf("\nSrc Dest cost");
    for(i=0;i<totalEdges;i++){
        printf("\n%d %d %d",e[i].src,e[i].dest,e[i].cost);
    }

    //prims krushkal dijkstra 

    //sort edges 
    printf("\nSrc Dest cost");
    for(i=0;i<totalEdges;i++){
        printf("\n%d %d %d",e[i].src,e[i].dest,e[i].cost);
    }




    return 0;
}