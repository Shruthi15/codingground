#include<stdio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node *left;
        struct node *right;
    };

struct node *newnode(int data)
    {
        struct node *node = (struct node*) malloc (sizeof(struct node));
        node->data = data;
        node->left = node->right = NULL;
        return node;
    }

int main()
    {
        int sum = 31;
        struct node *root = newnode(15);
        root->left = newnode(10);
        root->right = newnode(12);
        root->left->left = newnode(3);
        root->left->right = newnode(5);
        root->right->left = newnode(2);
        int sumexists = pathsum(root , sum);
        if (sumexists == 1)
            printf("\n path exists");
        else
            printf("\n no path");
        return 0;
        
    }
int pathsum(struct node *node, int sum)
    {
        if(node==NULL)
            {
                return(sum == 0);
            }
        else
            {
                int subpathsum = sum - node->data;
                if(node->left == NULL && node->right == NULL && subpathsum == 0)
                    return 1;
                return(pathsum(node->left, subpathsum)|| pathsum(node->right , subpathsum));
            }
            
    }
