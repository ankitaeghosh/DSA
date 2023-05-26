#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low, j = high;
    while(i<j){
        while(arr[i] <= pivot && i <= high -1){
            i++;
        }
        while(arr[j] >= pivot && j >= low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[low]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low >= high) return;
    int pivot  = partition(arr, low, high);
    quickSort(arr, low, pivot-1);
    quickSort(arr, high, pivot+1);
}

