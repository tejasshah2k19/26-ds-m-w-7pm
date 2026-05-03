#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root= NULL;

int main()
{

    root = malloc(sizeof(struct node));
    root->data = 90 ;
    root->left = NULL; 
    root->right = NULL;

    struct node *tmp = malloc(sizeof(struct node));
    tmp->data = 100; 
    tmp->left = NULL;
    tmp->right = NULL;
    root->right = tmp; 

    tmp = malloc(sizeof(struct node));
    tmp->data = 40 ;
    tmp->left = NULL;
    tmp->right= NULL; 
    root->left = tmp; 

    printf(" %d %d %d",root->data,root->left->data ,root->right->data);
    return 0;
}