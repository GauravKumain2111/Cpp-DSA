#include<iostream>
using namespace std;
int main()
{

    //Given:arrray
    //Result:tell how many times the number comes in the array

    // Sol: 

    //Step1:Input the array
    //Step2:Input the numbers for which to find the count
    //Step3:Store the count of the elements in a new array of size of the max the element in the original array has

    int n;
    cout<<"Input size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Input-array"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int hash[100]={0};

    for(int i =0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cout<<"how-many-num:"<<endl;
    cin>>q;
    
    while(q--){
    int num;
    cout<<"Which-num-count:"<<endl;
    cin>>num;
    cout<<hash[num]<<endl;
    }

    return 0;
}
