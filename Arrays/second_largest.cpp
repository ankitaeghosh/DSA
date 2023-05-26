#include<iostream>
using namespace std;
#include<vector>
//brute force
//time = O(NlogN)
int brute(vector<int>arr, int n){
    int arr[5] = {1,2,5,7,7};
    sort(arr);
    int largest = arr[n-1], secondl;
    for(int i=arr[n-2]; i>=0; i--){
        if(arr[i]!=largest){
            secondl = arr[i];
            break;
        }
    }
    return secondl;
}


//better
//first pass = find largest
// second pass = a[i] is largest among rest but smaller than the largest found in first pass
//time = O(2N)
int better(vector<int> arr, int n){
    int largest = arr[0], secondl = INT_MIN;
    for(int i = 1; i<n; i++){
        if(arr[i]>largest) largest = arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i]>secondl && arr[i != largest]) secondl = arr[i];
    }
    return secondl;
}

//optimal
//take both largest and second largest in one loop
//time = O(N)
int optimal(vector<int> arr, int n){
    int largest = arr[0], slargest = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}