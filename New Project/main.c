#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node * right;
};
struct node *newnode(int data)
{
    struct node* temp =(struct node*)malloc(sizeof(struct node));
    temp ->data = data;
    temp ->left = temp ->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if(root == NULL)
    return;
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void mirror(struct node *root)
{
    if (root == NULL)
    return;
    else
    {
    struct node *temp;
    temp = root->left;
    root->left =root->right;
    root->right = temp;
    
    mirror(root->left);
    mirror(root->right);
    }
}
int main()
{
    struct node * root =NULL;
    root = newnode(6);
    root->left = newnode(2);
    root->right = newnode(4);
    root->left->left = newnode(1);
    root->left->right= newnode(3);
    root->right->left= newnode(5);
    
    printf("\n tree inorder traversal\n");
    //original tree
    inorder(root);
    
    mirror(root);
    
    printf("\n mirror tree inorder traversal\n");
    //mirror tree
    inorder(root);
    return 0;
}


