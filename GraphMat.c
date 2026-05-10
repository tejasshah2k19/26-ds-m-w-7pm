#include <stdio.h>

int graph[4][4];

void input()
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n%d connected %d ? ", i, j);
            scanf("%d", &graph[i][j]);
        }
    }
}

void addEdge(int src, int dest)
{
    graph[src][dest] = 1;
    graph[dest][src] = 1;
}

void printNeighbour(int vertex)
{
    int j;

    printf("\nNeighbour of %d => ", vertex);
    for (j = 0; j < 4; j++)
    {
        if (graph[vertex][j] == 1)
        { //[3][0] [3][1]
            printf(" %d ", j);
        }
    }
}

int main()
{

    int totalEdges;
    int src, dest;
    int i;

    printf("\nHow many edges you have?");
    scanf("%d", &totalEdges); // 4

    for (i = 1; i <= totalEdges; i++)
    {
        printf("\nEnter Source and Destination : ");
        scanf("%d%d", &src, &dest);
        addEdge(src, dest); // 0 , 1
    }

    printf("\nEnter Source : ");
    scanf("%d",&src);
    printNeighbour(src);

    
   
    return 0;
}