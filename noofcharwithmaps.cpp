#include<iostream>
#include<map>
using namespace std;


int main()
{

    string s;
    cout<<"Enter String: "<<endl;
    cin>>s;
    
    map<char,int> mp;
    for(int i =0;i<s.size();i++){
        mp[s[i]]++;
    }
    int q;
    cout<<"Enter no. of char to find count of: "<<endl;
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter which char to find: "<<endl;
        cin>>c;
        cout<<"COunt is : "<<mp[c]<<endl;
      
    }
    cout<<"THIS WAY: "<<endl;
    for(auto i:mp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    return 0;
}