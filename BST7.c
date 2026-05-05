#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node* addNode(struct node *root, int data)//30,70 -> 40,70 -> 50,70 , NULL,70
{
    if (root == NULL) //  
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data < root->data) // 20
    {
        // left
        // node
        root->left = addNode(root->left, data);
    }
    else if (data > root->data)
    {
        // right
        root->right = addNode(root->right, data);
    }

    return root;
}

int main()
{

    root = addNode(root, 30);
    addNode(root, 40);
    addNode(root, 20);
    addNode(root, 10);
    addNode(root, 25);
    addNode(root, 35);
    addNode(root, 50);
 
 
    
    printf(" %d %d %d", root->data, root->left->data, root->right->data);
    return 0;
}