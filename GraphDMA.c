#include <stdio.h>
#include <stdlib.h>

struct edge
{
    int src;
    int dest;
};
int totalEdges;
struct edge *e; // src dest
int *visited;
int count = 0;

int checkForAlreadyVisited(int vertex) // 10
{
    int i;
    for (i = 0; i < count; i++)
    {
        if (visited[i] == vertex)
        {
            // already visited
            return 1;
        }
    }

    return 0;
}

void dfs(int vertex) // 10  20
{

    int i;

    // vertext => visited =>

    if (checkForAlreadyVisited(vertex) == 0)
    {
        printf(" %d ", vertex); // 10 20
        visited[count] = vertex;
        count++;
        for (i = 0; i < totalEdges * 2; i++)
        {
            if (e[i].src == vertex)
            {
                dfs(e[i].dest); //
            }
        }
    }
}

int main()
{

    int i;
    int src, dest;

    printf("\nHow many edges you have? ");
    scanf("%d", &totalEdges); // 4
    visited = calloc(totalEdges * 2, sizeof(int));

    e = calloc(totalEdges * 2, sizeof(struct edge));

    for (i = 0; i < totalEdges * 2; i++)
    {
        printf("\nEnter Source and Dest ");
        scanf("%d%d", &src, &dest); // 10 20
        e[i].src = src;
        e[i].dest = dest;
    }
    printf("\n SRC  DEST");
    for (i = 0; i < totalEdges * 2; i++)
    {
        printf("\n%d %d", e[i].src, e[i].dest);
    }

    // dfs

    dfs(10);
}

// dfs bfs
