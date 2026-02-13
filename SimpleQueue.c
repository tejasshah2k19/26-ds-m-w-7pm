#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;

void enQueue(int data)
{

    rear++; //-1 => 0 , 0 => 1 ,
    queue[rear] = data;
    if (front == -1)
    {
        front = 0;
    }
}

void deQueue()
{
    printf("\n %d removed ", queue[front]);
    front++;
}

void display()
{
    int i;
    printf("\nQueue data : ");
    for (i = front; i <= rear; i++)
    {
        printf(" %d", queue[i]);
    }
}

int main()
{
    int choice;
    int data;

    while (-1)
    {
        printf("\n1 For EnQueue\n2 For DeQueue\n3 For Display\n4 For Exit");
        printf("\nEnter Choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter data");
            scanf("%d", &data);
            enQueue(data);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            break;
        }
    }
    return 0;
}