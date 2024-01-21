#include <iostream>
using namespace std;


void swap(int* a ,int* b){

    int temp = *b;
    *b = *a;
    *a = temp;
}

int main(){

    int x = 5 , y =10;
    cout<<' '<<x<<' '<<y<<endl;
    swap(&x,&y);
    cout<<' '<<x<<' '<<y;
    return 0;
}