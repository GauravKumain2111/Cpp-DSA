// //decimal to bianry

// #include<iostream>
// using namespace std;
// #include<math.h>

// int main()
// {
//     int n;
//     cin>>n;
//     int ans = 0;
//     int i = 0;
//     while(n!=0){

//         int bits = n&1;
//         ans = (bits*pow(10,i))+ans;
//         n = n>>1;
//         i=i+1;
//     }

//     cout << ans;

//     return 0;
// }

//negative number

//decimal to bianry

// #include<iostream>
// using namespace std;
// #include<math.h>

// int main()
// {
//     int n;
//     cin>>n;
//     int ans = 0;
//     int i = 0;
//     while(n!=0){

//         int bitso = ~n;
//         int bitsn = bitso+1;
//         ans = (bitsn*pow(10,i))+ans;
//         n = n>>1;
//         i=i+1;
//     }

//     cout << ans;

//     return 0;
// }

//binary to decimal

#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n!=0){

        int bit = n%10;
        if(bit == 1){
            ans = ans +pow(2,i);
        }
        n = n/10;
        i++;
    }

    cout << ans;

    return 0;
}