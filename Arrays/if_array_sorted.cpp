#include<iostream>
using namespace std;
#include<vector>

int sorted(vector<int> arr, int n){
    for(int i = 0; i<n; i++){
        if(arr[i]>= arr[i-1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}