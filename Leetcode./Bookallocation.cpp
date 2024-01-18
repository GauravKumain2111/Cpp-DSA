bool possible(vector<int> arr,int n,int m, int mid){

    int st_count = 1;
    int page_count = 0;
    for(int i =0;i<n;i++){
        if(page_count+arr[i]<=mid){
            page_count+=arr[i];
        }
        else{
            st_count++;
            if(st_count > m || arr[i]>mid){
                return false;
            }
            page_count = arr[i];

        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    int s =0;
    int sum = 0;

    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(possible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
