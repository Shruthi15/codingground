/* Rotate a given LL */

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

void rotate(struct node **head, int k)
{
    
    if(k==0)
    return;
    
    struct node *current = *head;
    int count = 1;
    while(count < k && current !=NULL)
    {
    current = current -> next;
    count++;
    }
    
    if(current == NULL)
    return;
    
    struct node *s = current;
    
    while(current->next != NULL)
    current = current -> next;
    
    current ->next = *head;
    *head = s->next;
    s->next = NULL;
    
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
    int k;
    int a[] = {8,11,5,15,20,2};
    int i, n;
    n = sizeof(a)/sizeof(a[0]);
    
    for(i =0 ;i<n; i++)
    {
    push(&head, a[i]);
    }
    
    printlist(head);
    
   
   printf("\n Enter the number of rotations:");
    scanf("%d", &k); 
   rotate(&head, k);
    printlist(head);
    
    return (0);
}
