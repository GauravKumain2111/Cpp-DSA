 bool possible(vector<int>& arr,int n ,int k,int mid){

    int painter_count = 1;
    int area= 0;
    for(int i =0;i<n;i++){
        if(area+arr[i]<=mid){
            area+=arr[i];
        }
        else{
            painter_count++;
            if(painter_count>k || arr[i]>mid){
                return false;
            }
            area=arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();
    int s =0;
    int sum = 0;//change it to -1'-'
    for(int i =0;i<n;i++){
        sum+=boards[i];
    }
    int e = sum;
    int ans = -1;
    while(s<=e){
   int mid = s+(e-s)/2;
    if(possible(boards,n,k,mid)){
        ans = mid;
        e = mid-1;
    } else {
        s = mid + 1;
    }
    mid = s + (e - s) / 2;
    }
    return ans;
}
