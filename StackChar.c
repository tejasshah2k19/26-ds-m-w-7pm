#include <stdio.h>
#include<string.h>

#define SIZE 30

char stack[SIZE];
int top = -1;

void push(char c)
{

    if (top == SIZE - 1)
    {
        printf("Stack OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = c;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%c", stack[i]);
        }
    }
}

int main()
{
    // gabbar -> string
    // reverse ->
    int i;
    char str[30];
    printf("Enter string ");
    gets(str); // gabbar   () => valid [[{()}]]) => inValid 

    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    display(); 

    return 0;
}