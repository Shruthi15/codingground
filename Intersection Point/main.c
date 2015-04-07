#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};



void print (struct node *head)

{
    while(head!=NULL)
    {
        printf("\t %d ", head->data);
        head= head->next;
    }
}



int getIntersection(struct node *head1 , struct node *head2)
{
    int c1 = getcount(head1);
    int c2 = getcount(head2);
    
    int d;
    printf("\n %d", c1);
    printf(" \n %d", c2);
    if(c1 > c2)
    {
        d = c1- c2;
        return getIntersectionNode(d, head1, head2);
    }
    else
    {
        d = c2- c1;
        return getIntersectionNode(d, head2, head1);
    }
    
}

int getcount(struct node *head)
{
    struct node *current = head;
    int count = 0;
    while(current !=NULL)
    {
       count++;
       current = current->next;
    }
    return count;
}

int getIntersectionNode(int d, struct node *head1, struct node *head2)
{
    struct node *current1 = head1;
    struct node *current2 = head2;
    int i;
        for(i=0;i<d;i++)
        {
          if(current1==NULL)
          {
              return -1;
          
          }
          current1 = current1->next;
    }
while(current1!=NULL && current2!=NULL)
    {
    if(current1==current2)
    {
    return current1->data;
    }
    current1 = current1->next;
    current2 = current2->next;
    }
    return -1;
}

int main()
{
  
    struct node *newnode;
    struct node *head1 = (struct node*)malloc(sizeof(struct node));
    head1->data = 5;
    struct node *head2 = (struct node*)malloc(sizeof(struct node));
    head2->data = 12;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 9;
    head1->next = newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 8;
    head1->next ->next = newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 10;
    head1->next->next->next = newnode;
    head2->next = newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 20;
    head2->next->next = newnode;
    head2 ->next->next->next =NULL;
    print(head1);
    print(head2);
    
    
printf("\n  Intersection point is %d : ", getIntersection(head1 ,head2));
    
    return 0;
    
}