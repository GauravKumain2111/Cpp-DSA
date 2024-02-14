#include<bits/stdc++.h>
vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int> ans(n,0);
    unordered_map<int,int> mp;
    for(int i =0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto i:mp){
        if(i.first<=n){
            ans[i.first-1] = i.second;
        }
    }
return ans;
}
