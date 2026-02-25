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

char pop()
{
    if (top == -1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        return stack[top--];
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
    int invalid = 0; 
    printf("Enter string ");
    gets(str); //   ( { [ ] } )


    for (i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{' ){ 
            push(str[i]);
        }else{
            char cl = pop(); //[ 
            //str[i] = ] 

            if( (str[i] == ']' && cl == '[') || ( str[i] == '}' && cl == '{' ) ||  (str[i] == ')' && cl =='(')){
                continue;
            }else{
                invalid = 1; 
                break;
            }
        }
    }

    //string -> finish 
    //stack -> empty 
    

 
    return 0;
}