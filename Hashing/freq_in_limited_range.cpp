/* 
Given an array A[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all elements from 1 to N.
Note: The elements greater than N in the array can be ignored for counting and do modify the array in-place.

Your Task:
You don't need to read input or print anything. Complete the function frequencycount() that takes the array and n as input parameters and modify the array itself in place to denote the frequency count of each element from 1 to N. i,e element at index 0 should represent the frequency of 1, and so on.

Can you solve this problem without using extra space (O(1) Space)?

Constraints:
1 ≤ N ≤ 105
1 ≤ P ≤ 4*104 
1 <= A[i] <= P
*/
#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

void freq_in_lim_range(vector<int>& arr, int N, int P){
    unordered_map<int, int> mpp;
    for(int i=0; i<N; i++){
        mpp[arr[i] - 1] ++;
    }

    arr.clear();

    for(int i = 0; i<N; i++){
        arr.push_back(mpp[i]);
    }
}