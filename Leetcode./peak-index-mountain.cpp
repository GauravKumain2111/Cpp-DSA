class Solution {
public:
    int firstoccur(vector<int>& arr,int key){
        int s = 0; int e = arr.size()-1;
        int mid = s +(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(key==arr[mid]){
                ans = mid;
                e = mid-1;
            }
            else if (key<arr[mid]){
                e = mid -1;
            }
            else {
                s = mid+1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    int lastoccur(vector<int>& arr,int key){
        int s = 0; int e = arr.size()-1;
        int mid = s +(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(key==arr[mid]){
                ans = mid;
                s = mid+1;
            }
            else if (key<arr[mid]){
                e = mid -1;
            }
            else {
                s = mid+1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(firstoccur(nums,target)); 
        result.push_back(lastoccur(nums,target)); 

        return result;
    }
};
