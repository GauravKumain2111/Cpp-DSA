#include<iostream>
using namespace std;
class complex{
    int r;
    int i;
    complex(){
        r=0;
        i=0;
    }
    complex(int r,int i){
        this->r=r;
        this->i=i;

    }
    void addnum(complex obj1,complex obj2 ){
        cout<<obj1.r<<","<<obj1.i<<","<<endl;
        cout<<obj2.r<<","<<obj2.i<<","<<endl;
        cout<<"ADDITION : "<<endl;
        cout<<obj1.r+obj2.r<<","<<obj1.i+obj2.i<<endl;
    }
};
int main(){
    
complex c1(2,3);
complex c2(3,5);
    
    return 0;
}