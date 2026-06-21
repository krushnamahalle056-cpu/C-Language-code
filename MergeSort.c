#include<stdio.h>
void merge(int arr[], int low ,int mid , int high){
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[100];
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= high){
        temp[k++] = arr[j++];
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i];
    }
}     