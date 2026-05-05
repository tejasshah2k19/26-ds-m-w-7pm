#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;

} *root = NULL;

int calculateHeight(struct node *root)
{
    int lh = 0;
    int rh = 0; // 1

    if (root->left != NULL)
    {
        lh = root->left->height;
    }

    if (root->right != NULL)
    {
        rh = root->right->height;
    }

    if (lh > rh) // 0 > 1
    {
        return lh + 1;
    }
    else
    {
        return rh + 1; // 1 + 1
    }
}

int calculateBalanceFactor(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if (root->left != NULL)
    {
        lh = root->left->height;
    }

    if (root->right != NULL)
    {
        rh = root->right->height;
    }

    return lh - rh;
}

struct node *leftRotate(struct node *root)
{
    struct node *newRoot = root->right;
    root->right = newRoot->left;
    newRoot->left = root;

    root->height = calculateHeight(root);
    newRoot->height = calculateHeight(newRoot);

    return newRoot;
}

struct node *rightRotate(struct node *)
{
    struct node *newRoot = root->left;
    root->left = newRoot->right;
    newRoot->right = root;

    root->height = calculateHeight(root);
    newRoot->height = calculateHeight(newRoot);

    return newRoot;
}

struct node *addNode(struct node *root, int data) // 50 , 60
{

    if (root == NULL)
    {

        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->height = 1;
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

    root->height = calculateHeight(root);

    int balanceFactor = calculateBalanceFactor(root);

    if (balanceFactor < -1)
    {
        printf("\nRightImabalance : %d", root->data);
        // rotate
        return leftRotate(root);
    }
    if (balanceFactor > 1)
    {
        printf("\nLeftImabalance : %d", root->data);
        // rotate
        return rightRotate(root);
    }

    return root;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d(%d) ", root->data, root->height);
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

int main()
{

    root = addNode(root, 30); // root -> 1
    root = addNode(root, 40);
    root = addNode(root, 50);
    root = addNode(root, 60);
    root = addNode(root, 70);
    root = addNode(root, 80);
    // root = addNode(root, 90);
    // root = addNode(root, 100);
    // root = addNode(root, 110);

    // root = addNode(root, 50); // root -> 1
    // root = addNode(root, 40);
    // root = addNode(root, 30);

    printf("\nInOrder : ");
    inOrder(root);

    // printf(" %d ",root->data);

    return 0;
}