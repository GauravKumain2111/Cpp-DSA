vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int max =INT_MIN;
    vector<int> ans;
    
    for(int i =a.size()-1;i>=0;i--){
        if(a[i]>max){
            max = a[i];
            ans.push_back(max);
        }
    }
    return ans;
}
