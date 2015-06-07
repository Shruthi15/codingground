Kth to last element - Method 1

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
    // Find the length of LL and find the kth to last
    
    int length =0 , i;
    struct node *temp = head;
    while(temp!=NULL)
    {
        length++;
        temp = temp->next;
    }
    printf(" The length of LL : %d \n", length);
    
    if(length <k)
    return;
    
    temp = head;
    
    for(i=1 ; i< length-k+1; i++)
    {
        temp = temp ->next;
    }
    
    printf("The kth to last element is : %d \n",temp->data);
    
    return;
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