#include<iostream>
using namespace std;
void insertion(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j --;
        }
    }
}

//recursion

void insertion(int arr[], int i=0, int n){
    if(i == n) return;
    int j =i;
    while(j>0 && arr[j-1] > arr[j]){
        swap(arr[j-1], arr[j]);
        j --;
    }
    insertion(arr, i+1, n);
}