#include<iostream>
using namespace std;


int main()
{

    string s;
    cout<<"Enter String: "<<endl;
    cin>>s;
    int hash[26]= {0};
    for(int i =0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter no. of char to find count of: "<<endl;
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter which char to find: "<<endl;
        cin>>c;
        cout<<"COunt is : "<<hash[c-'a']<<endl;
      
    }
    return 0;
}