#include<stdio.h>
// first of all for binary search the array must be sorted
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
         return arr[mid];}
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1; // Key not found
}

