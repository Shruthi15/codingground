#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void push(struct node **head, int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp->next = *head;
    *head = temp;
}

struct node *partition(struct node *node, int x)
{
    struct node *beforestart = node;
    struct node *afterstart = node;
    while(node != NULL)
    {
        struct node *next = node->next;
        if(node ->data < x)
        {
            node ->next = beforestart;
            beforestart = node;
            
        }
        else
        {
           afterstart->next = node;
            afterstart = node;
        }
    
    node = next;
        
    }
    
    afterstart->next = NULL;
    
    
    return beforestart;
}

void printlist(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }
    
    printf("NULL \n");
    
}
int main()
{
    struct node *head = NULL;
    
    push(&head, 8);
    push(&head, 5);
    push(&head, 11);
    push(&head, 5);
    push(&head, 20);
    push(&head, 2);
    
    printlist(head);
    
    struct node *h = partition(head,8);
    printlist(h);
    
    return 0;
    
}
