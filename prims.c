#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct edge
{
    int src;
    int dest;
    int cost;
};

int totalEdges;
struct edge *e;
int *visited;
int totalVertex;
int count = 0;

int findAdj(int cost)
{ // 3

    int minCost = 9999;
    int minIndex;

    for (int x = 0; x < count; x++) // 3 4
    {
        int v = visited[x];
        for (int i = 0; i < totalEdges; i++)
        {
            if (e[i].src == v && minCost > e[i].cost && isVisited(e[i].dest) == 0)
            {
                minCost = e[i].cost; // 5
                minIndex = i;        // 1
            }
        }
    }
    return minIndex;
}

int isVisited(int v)
{
    for (int i = 0; i < totalVertex; i++)
    {
        if (visited[i] == v)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int i;
    int src, dest, cost;

    struct edge tmp;
    printf("how many vertex you have?");
    scanf("%d", &totalVertex);
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
    for (i = 0; i < totalEdges; i++)
    {
        printf("\n%d %d %d", e[i].src, e[i].dest, e[i].cost);
    }

    visited = calloc(totalVertex, sizeof(int));

    int v = 3;
    printf(" %d ", v);

    visited[count++] = v;

    while (count != totalVertex)
    {

        int index = findAdj(1000); // 3
        printf(" %d ", v);
        visited[count++] = v;
    }
    return 0;
}
