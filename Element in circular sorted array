#include<stdio.h>
int main()
{
    int A[]= { 10,11,16,19,2,4,8,9};
    int n;
    n = sizeof(A)/sizeof(A[0]);
    int x;
    printf("\n Enter the number to be found: ");
    scanf("%d",&x);
    int index = circulararray(A,n,x);
    if (index == -1)
        printf("\n Element not found");
    else
        printf("%d the element was found at index %d",x,index);
}

int circulararray(int A[],int n,int x)
{
    int low=0, high =n-1;
    while(low<high)
        {
            int mid = (low+high)/2;
            if(x == A[mid])
            return mid; // X is found
            
            if(A[mid]<=A[high])
                {
                    if(x>A[mid] && x<=A[high])
                        low = mid+1;
                    else
                        high = mid-1;
                }
            if(A[low]<=A[mid])
                {
                    if(x>=A[low]&& x<A[mid])
                        high = mid-1;
                    else
                        low = mid+1;
                }
        }

    return -1; // if element is not found
}
