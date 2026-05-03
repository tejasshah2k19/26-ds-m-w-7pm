#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node *addNode(struct node *root, int data) // 50-root , 90
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data < root->data)
    {

        // left
        root->left = addNode(root->left, data);
    }
    else if (data > root->data)
    {
        // right
        root->right = addNode(root->right, data);
    }

    return root;
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ",root->data);
    }
}

int main()
{

    root = addNode(root, 50);

    addNode(root, 90);
    addNode(root, 40);
    addNode(root, 100);
    addNode(root, 70);
    addNode(root, 20);
    addNode(root, 45);

    // inOrder(root);
    // preOrder(root);
    postOrder(root);

    return 0;
}