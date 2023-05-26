//brute force
#include<iostream>
using namespace std;
#include<vector>
int brute_force(){
    int arr[5] = {1, 4, 5, 2, 3};
    sort(arr);
    return arr[5];
}
//time = O(NlogN)

//optimal method
int optimal_method(vector<int> arr, int n){
    int largest = arr[0];
    for (int i = 1; i<n; i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
//time = O(N)