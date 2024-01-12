class Solution {

    private:
        int binarysearch(vector<int>& nums,int s,int e,int key){
            int start = s;
            int end = e;
            int mid = start+(end-start)/2;
            while(start<=end){
                if(key==nums[mid]){
                    return mid;
                }
                if(key> nums[mid]){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
                mid = start+(end-start)/2;
            }
           return -1;
        }

        int pivot(vector<int>& nums,int n ){
            int s = 0;
            int e = n-1;
            int mid = s+(e-s)/2;

            while(s<e){
                if(nums[mid]>=nums[0]){
                    s = mid+1;
                }
                else{
                    e = mid;
                }
             mid = s+(e-s)/2;

            }
        return s;
        }

public:
    int search(vector<int>& nums, int target) {
        int p = pivot(nums,nums.size());
        if(nums[p]<=target && nums[nums.size()-1]>=target){
            return binarysearch(nums,p,nums.size()-1,target);
        }
        else{
            return binarysearch(nums,0,p-1,target);
        }
    }
};
