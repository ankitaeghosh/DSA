#include<iostream>
#include<vector>
using namespace std;

int second_smallest(vector<int> arr, int n){
    int smallest = arr[0], ssmallest = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

//same concept as largest waale