#include <stdio.h>
#include<stdbool.h>
#define MAX 1000000
 
 int main()
{
    int A[] = {5, 3, 32, 6, 16, 2};
    int n = 38;
    int arr_size = 6;
 
    printpairsequalsum(A, arr_size, n);
    return 0;
}
void printpairsequalsum(int arr[], int arr_size, int sum)
{
  int i, temp;
  bool hashMap[MAX] = {0}; 
 
  for(i = 0; i < arr_size; i++)
  {
    temp = sum - arr[i];
    if(temp >= 0 && hashMap[temp] == 1)
    {
      printf("\n Pair in the array with given sum %d is %d, %d", sum, arr[i], temp);
    }
    hashMap[arr[i]] = 1;
  }
}
 
