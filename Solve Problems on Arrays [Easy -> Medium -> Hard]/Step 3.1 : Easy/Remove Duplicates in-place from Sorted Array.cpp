int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	vector<int>ans;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[i+1]){
			ans.push_back(arr[i]);
		}
	}
	return ans.size();
}
