//Searching in ARRAY

#include<iostream>
using namespace std;


int binarysearch(int arr[],int n,int key)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
          return mid;

        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >>arr[i];
    }
    int key;
    cin >> key;
    if (binarysearch(arr,n,key)){
        cout << "index:"<< binarysearch(arr,n,key)<<" ";
        cout <<"found :)";
    }
    else{
        cout <<"not found :(";
    }


    return 0;
}