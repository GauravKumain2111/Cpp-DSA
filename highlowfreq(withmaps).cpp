#include<bits/stdc++.h>
vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    unordered_map<int,int> mp;
    for(int i =0;i<v.size();i++){
        mp[v[i]]++;
    }
    vector<int> ans;
    int high_freq =INT_MIN;
    int low_freq = INT_MAX;
    int high=INT_MIN;;
    int low = INT_MAX;
    for(auto i:mp){
        if(high_freq<i.second){
            high = i.first;
            high_freq=i.second;
        }
        if(low_freq>i.second){
            low=i.first;
            low_freq=i.second;
        }
         if(i.second == high_freq){
            ans.push_back(i.first);
        }
          if(i.second == low_freq){
            ans.push_back(i.first);
        }
    }
   
    return ans;
}
