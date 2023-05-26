#include<iostream>
using namespace std;
#include<vector>
#include<set>
//remove duplicate in sorted array
//brute force
//take elements add in set. then take elements out of set and put it in array from start. on whatever index the set gets empty is the answer
//time = O(NlogN + N)
int brute(vector<int> arr, int n){
    set<int> st;
    for(int i = 0; i<n; i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it: st){
        arr[index] = it;
        index ++;
    }
    return index;
}


//optimal
//take two pointers
int optimal(vector<int> arr, int n){
    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[j]!= arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
