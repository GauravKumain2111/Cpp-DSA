#include <iostream>
using namespace std;

void increment(int& value)//means we are taking value as reference of the value a 
{
    value++;}
int main(){
    int a =5;
    increment(a);
    cout<<a;

   



    return 0;
}