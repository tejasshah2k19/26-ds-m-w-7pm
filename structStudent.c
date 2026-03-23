#include<stdio.h>

struct student{
    char name[30];
    int maths,sci,eng;
    float perc; 

}; 

struct student s[50]; 

void getData(int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nEnter name and marks of three subjects");
        scanf("%s%d%d%d",&s[i].name,&s[i].maths,&s[i].sci,&s[i].eng); 
        s[i].perc = (s[i].maths+s[i].sci+s[i].eng) / 3 ; 
    }
}

void printData(int n){
    int i;
    for(i=0;i<n;i++){
        printf("\n%s    %d  %d  %d  %f", s[i].name, s[i].maths, s[i].sci, s[i].eng,s[i].perc); 
    }
}

int main(){

    getData(3);
    printData(3);

    return 0;
}