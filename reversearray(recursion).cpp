void reverse(int s,int e, vector<int> &nums){
  
  if (s < e) {
    swap(nums[s], nums[e]);
     reverse(s + 1, e - 1, nums);
  }
}


vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
     reverse(0, n-1,nums);
     return nums;


}
