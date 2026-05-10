#include <stdio.h>
#include <stdlib.h>

struct edge
{
    int src;
    int dest;
};

struct edge *e;
int totalEdges;
int *visited;
int totalVertex;
int count = 0;

int isVisited(int dest)
{
    for (int i = 0; i < count; i++)
    {
        if (visited[i] == dest)
        {
            return 1;
        }
    }

    return 0; // untouch - not visited
}

void bfs(int vertex) // 1
{

    int queueIndex = 0;
    printf(" %d ", vertex); // 1
    // visited[ 1, 2 ]
    visited[count++] = vertex; // 1

    while (queueIndex <= totalVertex)
    {

        vertex = visited[queueIndex]; // 2

        for (int i = 0; i < totalEdges * 2; i++)
        {
            if (e[i].src == vertex) // e[0] ..... e[7] src = 1
            {
                // if you does not visited e[i].dest
                if (isVisited(e[i].dest) == 0)
                {
                    printf(" %d ", e[i].dest);    // 2
                    visited[count++] = e[i].dest; // 1 2
                }
            }
        }
        
        queueIndex++;
    }
}

int main()
{

    int src;
    int dest;
    int i;

    printf("\nHow many vertext and edges you have?");
    scanf("%d%d", &totalVertex, &totalEdges);

    visited = calloc(totalVertex, sizeof(int));

    e = calloc(totalEdges * 2, sizeof(struct edge));

    for (i = 0; i < totalEdges * 2; i++)
    {

        printf("\nEnter source and Destination");
        scanf("%d%d", &src, &dest); // 2 5
        e[i].src = src;
        e[i].dest = dest;
        i++;
        e[i].src = dest;
        e[i].dest = src;
    }

    // printf("\nSrc  Dest\n");

    // for (i = 0; i < totalEdges * 2; i++)
    // {
    //     printf("\n%d  %d", e[i].src, e[i].dest); // 2 5
    // }

    bfs(1);

    return 0;
}
