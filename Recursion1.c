#include <stdio.h>

void add()
{
    printf("\nadd");
}

void sub()
{
    printf("\nSub");
    add();
}

void mul()
{
    sub();
    printf("\nmul");
}

// must need base case -->

void print(int n)
{
    n--;
    if (n != 0)
    {
        print(n);
    }
    printf("hi %d ", n);
}

int main()
{

    print(5);
    return 0;
}
