/*
Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. If two numbers have the same frequency then the larger number should be given preference. 

Note: Print the elements according to the frequency count (from highest to lowest) and if the frequency is equal then larger number will be given preference.

User Task:
The task is to complete the function topK() that takes the array and integer k as input and returns a list of top k frequent elements.

Expected Time Complexity : O(NlogN)
Expected Auxilliary Space : O(N)

Constraints:
1 <= N <= 105
1<=A[i]<=105
*/

vector<int> topK(vector<int>& nums, int k){
    unordered_map<int, int> mpp;
    for(int i=0; i<nums.size(); i++){
        mpp[numa[i]]++;
    }

    vector<pair<int, int>> ans;

    //storing in basis (frequence, number)
    for(auto i:mpp){
        ans.push_back({i.second, i.first});
    }

    //sorting in descending order
    sort(ans.begin(), and.end(), greater<pair<int, int>>());

    //sorting in descending order if frequency is same
    for(int i=0; i<ans.size(); i++){
        if(ans[i].first == ans[i+1].first && ans[i].second < ans[i+1].second && ans[i]!= ans.size()-1){
            swap(ans[i], ans[i+1]);
        }
    }

    vector<int> res;

    for(int i=0; i<k; i++){
        res.push_back(ans[i].second);
    }

    return res;
}