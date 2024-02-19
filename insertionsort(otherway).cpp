#include<algorithm>
void insertionSort(int arr[], int n)
{
    //write your code here
    for(int i =0;i<=n-1;i++){
        for(int j=i;j>0&&arr[j-1]>arr[j];j--){
           
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            
            
        }
    }
}
