#include <stdio.h>

struct student
{
    char name[30];
    int maths, sci, eng;
    float perc;
};

struct student *s;

void getData(int n)
{
    struct student p;
    s = &p; 
    printf("\nEnter name and marks of three subjects");
    scanf("%s%d%d%d", &s->name, &s->maths, &s->sci, &s->eng);
    s->perc = (s->maths + s->sci + s->eng) / 3;
}

void printData(int n)
{
    int i;
    printf("\n%s    %d  %d  %d  %f", s->name, s->maths, s->sci, s->eng, s->perc);
}

int main()
{

    getData(3);
    printData(3);

    return 0;
}