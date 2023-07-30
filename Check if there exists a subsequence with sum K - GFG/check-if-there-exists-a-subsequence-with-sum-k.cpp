//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    bool check(vector<int>&arr, int n, int k ,int index, int sum)
    {
        if(index==n)
        {
            if(sum==k)
            {
                return true;
            }
            else{
                return false;
            }
        }
        if(sum>k)
        {
            return false;
        }
        sum+=arr[index];
        if(check(arr,n,k,index+1,sum)==true)
        return true;
        
        sum-=arr[index];
        if(check(arr,n,k,index+1,sum)==true)
        return true;
        
        return false;
        
    }
    public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
        check(arr,n,k,0,0);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    }
    return 0;
}
// } Driver Code Ends