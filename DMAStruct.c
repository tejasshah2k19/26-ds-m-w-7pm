#include<stdio.h>
#include<stdlib.h>


struct student {
    char name[20];
    int maths,sci,eng;

};

void sma(){
    
    struct student s;//name maths sci eng => 20+4+4+4 => 
    printf("enter name and marks of three subjects");
    scanf("%s%d%d%d",&s.name,&s.maths,&s.sci,&s.eng); 
    printf("name = %s maths = %d sci = %d  eng = %d",s.name,s.maths,s.sci,s.eng);
}

void dma(){
    struct student *s;    
    s = malloc(sizeof(struct student));
    printf("enter name and marks of three subjects");
    scanf("%s%d%d%d",&s->name,&s->maths,&s->sci,&s->eng); 
    printf("name = %s maths = %d sci = %d  eng = %d",s->name,s->maths,s->sci,s->eng);

}

int main(){


    struct student *s; 
    s = calloc(20,sizeof(struct student));

    //malloc()
    //malloc()
    //malloc()

    

    return 0;
}