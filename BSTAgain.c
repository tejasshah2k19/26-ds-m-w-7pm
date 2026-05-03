#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;

} *root = NULL;

struct node *addNode(struct node *root, int data) // 50 , 60
{

    if (root == NULL)
    {

        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (data < root->data)
        {
            // left
            root->left = addNode(root->left, data);
        }
        else if (data > root->data)
        {
            // right
            root->right = addNode(root->right, data);
        }
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

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}

int inOrderSuccessor(struct node *root)
{ // 36
    if (root->left != NULL)
    {
        return inOrderSuccessor(root->left);
    }
    return root->data;
}

struct node *removeNode(struct node *root, int data) // 25,28*
{

    if (root == NULL)
    {
        return root;
    }
    else if (root->data == data)
    {
        // if (root->left == NULL && root->right == NULL)
        // {
        //     // 0 child
        //     return NULL;
        // }
        // else if (root->left == NULL && root->right != NULL)
        // {
        //     return root->right;
        // }
        // else if (root->left != NULL && root->right == NULL)
        // {
        //     return root->left;
        // }
        // else
        // {
        //     // both child
        //     int smallest = inOrderSuccessor(root->right);
        //     root->data = smallest;
        //     removeNode(root->right, smallest);
        // }

        // part 2

        if (root->left != NULL && root->right != NULL)
        {
            // both child
            int smallest = inOrderSuccessor(root->right);
            root->data = smallest;
            removeNode(root->right, smallest);
        }
        else if (root->left == NULL)
        {
            return root->right;
        }
        else if (root->right == NULL)
        {
            return root->left;
        }
    }
    else if (data > root->data)
    {
        // right
        root->right = removeNode(root->right, data);
    }
    else if (data < root->data)
    {
        // left
        root->left = removeNode(root->left, data);
    }

    return root;
}

int main()
{

    root = addNode(root, 25);
    addNode(root, 20);
    addNode(root, 36);
    addNode(root, 10);
    addNode(root, 22);
    addNode(root, 30);
    addNode(root, 40);
    addNode(root, 5);
    addNode(root, 12);
    addNode(root, 1);
    addNode(root, 8);
    addNode(root, 15);
    addNode(root, 28);
    addNode(root, 38);
    addNode(root, 48);
    addNode(root, 45);
    addNode(root, 50);

    // printf(" %d %d %d %d", root->data, root->left->data, root->right->data, root->right->right->data);

    inOrder(root);
    // preOrder
    // postOrder

    // removeNode(root, 28); // leaf node

    // removeNode(root, 30);

    root = removeNode(root, 250);
    printf("\n");
    inOrder(root);

    return 0;
}