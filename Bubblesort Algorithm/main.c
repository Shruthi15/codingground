#include<stdio.h>
#include<stdlib.h>

void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(int a[], int n)
{
    int flag;
    int i, j;
    for(i=0; i<n ; i++)
    {
        flag == 0;
        for(j=0; j<n-i-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j], &a[j+1]);
                flag == 1;
            }
        }
        
        if(flag == 0)
        break;
    }
}

void printarray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" \t %d",a[i]);
        
    }
}

int main()
{
    int a[] = {75,24,32,16,90,47,10};
    int n = sizeof(a)/sizeof(a[0]);
    printf("\n The array to be sorted is: ");
    printarray(a,n);
    bubblesort(a,n);
    printf("\n The sorted array is: ");
    printarray(a,n);
    return 0;
}


