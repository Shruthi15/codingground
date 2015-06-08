/* partition LL - Set 2 */

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
    struct node *beforestart = NULL;
    struct node *beforeend = NULL;
    struct node *afterstart = NULL;
    struct node *afterend = NULL;
    while(node != NULL)
    {
        struct node *next = node->next;
        node->next = NULL;
        
        if(node ->data <= x)
        {
           if(beforestart == NULL)
            {
                beforestart = node;
                
                beforeend = beforestart;
            }
            else
            {
            beforeend->next = node;
            beforeend = node;
            } 
        }  
        else
        {
           if(afterstart == NULL)
            {
                afterstart = node;
                
                afterend = afterstart;
            }
            else
            {
            afterend ->next = node;
            afterend = node;
            }
            
        }
    
    node = next;
    }
        
    
    
    if(beforestart == NULL)
    {
        return afterstart;
    }
    
    beforeend->next = afterstart;
    
    
    
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
    push(&head, 2);
    push(&head, 15);
    push(&head, 4);
    push(&head, 20);
    push(&head, 10); 
    push(&head, 4); 
    
    printlist(head);
    
    struct node *h = partition(head,4);
    printlist(h);
    
    return 0;
    
}

