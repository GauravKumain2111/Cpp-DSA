class Solution {
    private:
        int binarysearch(int n){
            int s = 0;
            int e = n;
            long long mid = s +(e-s)/2;
            int ans = -1;

            while(s<=e){
                long long sq = mid*mid;
                if(sq == n){
                    return mid;
                }
                if(sq < n){
                    ans = mid;
                    s = mid+1;
                }
                else{
                    e=mid-1;
                }
                mid = s+(e-s)/2;
            }              
            
             return ans;
        }
public:
    int mySqrt(int x) {
        return binarysearch(x);
    }
};
