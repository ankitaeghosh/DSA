#include<iostream>
using namespace std;
void selection(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int min = i;
        for(int j = i; j <= n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}