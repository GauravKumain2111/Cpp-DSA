void reverse(vector<int>&arr,int s,int e){
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
    
}

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n =arr.size();
      
     
   
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr, 0,  n-1);
    return arr;

}
