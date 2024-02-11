#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> vec = {2,1,3,4,5,66,65,7,56,5,33,4,3,43,43,5,45};
    map<int,int> mp;

    for(int i =0;i<vec.size();i++){
        mp[vec[i]]++;
    }
    for(pair<int,int> m:mp){
        cout<<"key : "<<m.first<<" "<<"frequency"<<m.second<<endl;
    }

    return 0;
}
