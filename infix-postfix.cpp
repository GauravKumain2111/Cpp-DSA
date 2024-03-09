#include<bits/stdc++.h>
using namespace std;
int prec(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='*'||ch=='/'){
        return 2;
    }
    else if(ch=='+'||ch=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{


    string str;
    cin>>str;
    stack<char>s;
    string ans;
    for(int i =0;i<str.size();i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')){
            ans+=str[i];
        }
        else if(str[i]=='('){
            s.push(str[i]);
        }
        else if(str[i]==')'){
            while(s.top()!='('){
                ans+=s.top();
                s.pop();
            }
            s.pop();//remove open bracket
        }
        else{
            while(!s.empty()&&prec(str[i])<=prec(s.top())){
                ans+=s.top();
                s.pop();
            }
            s.push(str[i]);
        }
    }
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    cout<<ans;
    return 0;

}
