#include<map>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int>ans;
     map < int, int > mp;
     for(int i =0;i<a.size();i++){
         mp[a[i]]++;
     }
     for(int i =0;i<b.size();i++){
         mp[b[i]]++;
     }
     for(auto i :mp){
         ans.push_back(i.first);
     }
     return ans;
}
