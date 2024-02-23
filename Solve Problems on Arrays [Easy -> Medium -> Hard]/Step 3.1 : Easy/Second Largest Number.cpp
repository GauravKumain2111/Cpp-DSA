vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int max = INT_MIN;
    int smax = INT_MIN;
    int min = INT_MAX;
    int smin = INT_MAX;
    vector<int>ans;
    for(int i =0;i<a.size();i++){
        if(a[i]>max){
            smax = max;
            max = a[i];

        }
        if(a[i]<min){
            smin = min;
            min = a[i];
        }
        if(a[i]>smax && a[i]<max){
            smax = a[i];
        }
         if(a[i]<smin && a[i]>min){
            smin = a[i];
        }
    }
   
    ans.push_back(smax);
    ans.push_back(smin);
    return ans;
    

}
