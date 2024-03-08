//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//doubt is why code runs till n and not n-1 and why the else is not after if as else
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
 vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> ans;
        for(int i = 0; i < n; i++){
            bool found = false;
            for(int j = i + 1; j < n; j++){
                if(arr[j] > arr[i]){
                    ans.push_back(arr[j]);
                    found = true;
                    break;
                }
            }
            if(!found){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
