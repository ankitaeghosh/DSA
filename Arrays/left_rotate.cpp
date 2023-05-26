#include<iostream>
#include<vector>
using namespace std;

//rotating by 1 place
vector<int> rotate_one(vector<int> arr, int n){
    int temp = arr[0]; //store the first element
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i]; //store the rest element at one index before
    }
    arr[n-1] = temp; //storing the first element at last
    return arr; 
}


//rotation by D places

//brute
//time = O(n+d)
//space = O(d)
//if D > n; number of rotation = D%n
vector<int> brute(vector<int> arr, int n, int d){
    d = d%n;
    vector<int> temp(d); 
    for(int i =0; i<d; i++){
        temp.push_back(arr[i]);
    }
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
    return arr;
}

//optimal
//time = O(2N)
//space = O(1)
void reverse(int arr[], int n){
    int start = arr[0], end = arr[n];
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --; 
    }
}
void optimal(int arr[], int n, int d){
    d = d%n;
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}