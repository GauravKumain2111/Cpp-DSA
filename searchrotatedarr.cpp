#include<iostream>
using namespace std;

int binarysearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e-1;
    int mid = (start+end)/2;

    while(start<=end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid])
        {
            start = mid+1;
        }
        else{
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
}

int getpivot(int arr[],int n ){
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
         mid = s +(e-s)/2;

    }
    return s;
}

int main()
{

    int nums[7] = {4,5,6,7,0,1,2};
    int key = 1;
    int p = getpivot(nums,7);
    if(nums[p]<=key && nums[6]>=key){
        cout << binarysearch(nums,p,7,key);
    }
    else{
        cout << binarysearch(nums,0,p-1,key);
    }


    return 0;
}