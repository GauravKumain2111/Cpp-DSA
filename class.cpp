#include<iostream>
using namespace std;
class Shape{
void getarea(){
   cout<<" get area ";
}
};
class square:public Shape
{public:
   void getarea(int x){
    int area=x*x;
    cout<<"The area is: "<<area;

   }
};
class circle:public Shape{
    public:
   void getarea(int r){
    float area=3.14*r*r;
    cout<<"The area is: "<<area;

   }
};
int main(){
   square sq;
   sq.getarea(2);
   circle c;
   c.getarea(4);
}