#include<iostream>
using namespace std;

int square(int x){
    int s = 0;
    int e = x-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        int sq = mid*mid;
        if(sq==x){
            return mid;
        }
        else if (sq>x){
            e = mid-1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}
int main()
{
    int n ;
    cin>>n;
    cout << square(n);

    return 0;
}