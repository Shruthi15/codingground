/* Kth to last element - Method 2: Using 2 pointers */ 

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

void printktolast(struct node *head, int k)
{
  printf("\n ENTERED");
  struct node *current = head;
  int i;
  if(current!=NULL)
    {
        for(i = 1 ; i < k ; i++)
            {
                current = current -> next; 
            }
    } 
    
    else
    return;
    
    struct node *m = head;
    while (current -> next)
    {
       current = current -> next;
       m = m->next;
    }
    
   printf("\n The element is : %d " , m->data);
     
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
    push(&head, 4);
    push(&head, 6);
    push(&head, 1);
    push(&head, 9);
    printlist(head);
    int k;
    printf("\n Enter the kth number :");
    scanf("%d",&k);
     printktolast(head, k);
    
    
    return 0;
    
}