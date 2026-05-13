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
int parent[MAX];

int findParent(int v) // v= 1
{                     // 7
    int p;
    p = parent[v]; // 2

    while (p != parent[p]) // 1 != 1
    {
        p = parent[p];
    }

    return p; // 1
}

int main()
{

    int i;
    int src, dest, cost;
    struct edge tmp;
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

    for (int i = 0; i < totalEdges; i++)
    {
        for (int j = 0; j < totalEdges - 1; j++)
        {
            if (e[j].cost > e[j + 1].cost)
            {
                tmp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = tmp;
            }
        }
    }

    // sort edges
    printf("\nSrc Dest cost");
    for (i = 0; i < totalEdges; i++)
    {
        printf("\n%d %d %d", e[i].src, e[i].dest, e[i].cost);
    }

    // set parent
    for (int i = 0; i < MAX; i++)
    {
        parent[i] = i;
    }

    // visit all edges
    for (i = 0; i < totalEdges; i++)
    {
        printf("\nchecking for : %d = %d = %d ",e[i].src,e[i].dest,e[i].cost);

        if (findParent(e[i].src) != findParent(e[i].dest))
        {
            printf("\n%d %d %d ",e[i].src,e[i].dest,e[i].cost);//0 1 2 
            parent[e[i].src ] = findParent(e[i].dest);
        }
    }

    return 0;
}