#include <stdio.h>
int main()
{
    char a[] = "ABCD";
  
  int  len = strlen(a);
    permutation(a,0,len);
    return 0;
}

void swap(char *x , char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char *a, int i , int n)
{
    int j;
    if(i==n-1)
    {
        printf("\n%s", a);
    }
    else
    {
        for(j=i;j<n;j++)
        {
            swap((a+i),(a+j));
            permutation(a,i+1,n);
            swap((a+i),(a+j));
        }
    }
    
}






















 
