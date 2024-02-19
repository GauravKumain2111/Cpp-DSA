#include<algorithm>
void insertionSort(int arr[], int n)
{
    //write your code here
    for(int i =0;i<=n-1;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                std::swap(arr[j-1],arr[j]);
            }
        }
    }
}
