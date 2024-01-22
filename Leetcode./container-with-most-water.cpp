class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> ans;
        int max = -1;
        int s= 0;
        int e= height.size()-1;
        while(s<e){
            int l = min(height[s],height[e]);
            int b = e-s;
            int area=l*b;
            if(area>max){
                max = area;
            }
                
            else if(height[s]<height[e]) {
                s++;
            }
            else{
                e--;
            }
            
        }
        return max;
    }
};
