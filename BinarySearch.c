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

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int result = binarySearch(arr, size, key);
    if(result != -1){
        printf("Element found: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}