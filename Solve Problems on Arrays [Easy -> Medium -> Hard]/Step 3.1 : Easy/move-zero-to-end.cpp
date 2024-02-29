vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    
    int non_zeroindex = 0;
    for(int i =0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[non_zeroindex]);
            non_zeroindex++;
        }
    }
    return a;
    
}
