#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    vector<int> ans;
    for(int i =0;i<arr.size();i++){
        if(arr[i]==0){
            ans.push_back(arr[i]);
        }
        
    }
   
     for(int i =0;i<arr.size();i++){
         if(arr[i]==1){
            ans.push_back(arr[i]);
        }
        
    }
      for(int i =0;i<arr.size();i++){
         if(arr[i]==2){
            ans.push_back(arr[i]);
        }
        
    }
   arr=ans;
    
}



2.

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
//     vector<int> ans;
//     for(int i =0;i<arr.size();i++){
//         if(arr[i]==0){
//             ans.push_back(arr[i]);
//         }
        
//     }
   
//      for(int i =0;i<arr.size();i++){
//          if(arr[i]==1){
//             ans.push_back(arr[i]);
//         }
        
//     }
//       for(int i =0;i<arr.size();i++){
//          if(arr[i]==2){
//             ans.push_back(arr[i]);
//         }
        
//     }
//    arr=ans;
sort(arr.begin(),arr.end());
    
}


3.#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here

    int count0=0,count1=0,count2=0;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(int i =0;i<count0;i++){
        arr[i]=0;
    }
    for(int i =count0;i<count0+count1 ;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<n;i++){
        arr[i]=2;
    }
}


4.#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int low =0;
    int mid = 0;
    int high =n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            
            high--;
        }
    }
}
