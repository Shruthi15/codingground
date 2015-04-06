#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* newnode(int data)
{
    struct node *node = (struct node*)malloc (sizeof(struct node));
    node->data = data;
    node ->left = node->right = NULL;
    return node;
}
struct node *lca(struct node* root , int n1, int n2)
{
    if(root == NULL)
    return NULL;
    if(root->data >n1 && root->data >n2 )
    return lca(root->left, n1, n2);
    if(root->data <n1 && root->data <n2 )
    return lca(root->right, n1, n2);
    
    return root;
    
}

int main()
{
    struct node *root = newnode(40);
    root->left = newnode(10);
    root->left->left = newnode(8);
    root->left->right = newnode(12);
    root->left->right->left = newnode(11);
    root->left->right->right = newnode(15);
    root->right = newnode(60);
    int n1, n2;
    printf(" \n  Enter the node1: ");
    scanf("%d", &n1);
    printf(" \n  Enter the node2: ");
    scanf("%d", &n2);
    struct node *l = lca(root, n1, n2);
    printf("\n the lca is %d", l->data);
    
    return 0;
}

