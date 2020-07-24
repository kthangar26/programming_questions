/* Array Pair Sum.  In given array N find the sum K value pairs */

#include<stdio.h>

void findSum(int* arr, int K, int N, int *a, int *b) {
    int right,left = 0;
    right = N -1;
    *a = NULL;
    *b = NULL;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        printf("Sum is %d\n", sum);
        if (sum == K) {
            *a = left;
            *b = right;
            printf("Sum found %d %d\n", arr[left], arr[right]);
            //break;  first pair
            left = left +1; // right = right -1; all pairs
        } else if ( sum < K) {
            left = left +1;
        }
        else {
            right = right -1;
        }
    }
    
    return;
    
}

void main() {
    int arr[] = {1,2,3,4,5}; //sorted array.
    int k = 7;
    int a,b;
    int n = (sizeof(arr)/sizeof(arr[0]));
    printf("No of ele:%d\n", n);
    findSum(arr, k, n, &a, &b);
    printf("Sum %d is array A:%d, B:%d", k, arr[a],arr[b]);
}


