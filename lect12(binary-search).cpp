//BINARY SEARCH

#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
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

}


int main()
{
    int arr1[5] = {3,4,5,6,7};
    int arr2[6] = {8,9,10,11,23,55};

    int found = binarysearch(arr1,5,4);
    cout << found;
    return 0;
}