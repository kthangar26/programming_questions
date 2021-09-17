/******************************************************************************

                          Quick_sort Implementation:
  Method : Divide and Conquer 
  Space:  in-place method. 
  1. consider the piviot value as last element of array
  2. split the array into two block such that all elements 
  left of side piviot should lesser than piviot and right side
  should be greater than piviot.
  3. recurisvely split the array in such a manner till the split array 
  reaches one element. 

*******************************************************************************/

#include <stdio.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
     return;
}

int Partition(int arr[], int start, int end)
{
    int Piviot = arr[end];
    int Pindex = start;
    for (int i=start; i < end; i++) {
        if (arr[i] <= Piviot) {
            swap(&arr[i], &arr[Pindex]);
            Pindex++;
        }
    }
    swap(&arr[Pindex], &arr[end]);
    return Pindex;
}

void Quick_sort (int arr[], int start, int end)
{
    if (start < end) {
        int Pindex = Partition(arr, start, end);
        Quick_sort(arr, start, Pindex-1);
        Quick_sort(arr,Pindex+1, end);
    }
    return;
}
int main()
{
    int arr [] = {7,2,1,6,8,5,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Quick_sort ( arr,0,n-1);
    for (int i =0; i < n;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
