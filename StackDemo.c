#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1; // EMPTY

void push(int num)
{

    if (top == SIZE - 1)
    {
        printf("\nStack OVERFLOW : %d", num);
    }
    else
    {
        top++;
        stack[top] = num;
        printf("\n%d inserted ... ", num);
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOW");
    }
    else
    {
        printf("\n%d is removed", stack[top]);
        top--;
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // stack overflow
    push(70); // stack overflow

    display();

    pop();
    pop();

    display();
    return 0;
}