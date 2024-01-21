#include <iostream>
using namespace std;

int main(){

    int a ;
    a = 5;
    int* ptr = &a;
    cout << ptr<<endl;
    int* b = ptr;

    *b = 10;
    cout << b<<endl;
    cout << ptr<<endl; 



    return 0;
}