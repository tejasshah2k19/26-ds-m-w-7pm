#include <stdlib.h>
#include <stdio.h>

struct edge
{
    int src;
    int dest;
};

int main()
{

    struct edge e[8];
    int i;
    int src, dest;

    for (i = 0; i < 8; i++)
    {
        printf("Enter source and destination ");
        scanf("%d%d", &src, &dest); // 3 7
        e[i].src = src;
        e[i].dest = dest;

        i++;

        e[i].src = dest; 
        e[i].dest = src; 

    }

    printf("\nAll Edges : ");
    for(i=0;i<8;i++){
        printf("\n%d %d",e[i].src,e[i].dest);
    }


    return 0;
}