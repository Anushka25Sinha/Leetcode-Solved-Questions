class Solution {
public:
    int lower_bound(vector<int>a , int x)
    {
        int n=a.size();
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]>=x)
            {
                ans = mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    
    int upper_bound(vector<int>a , int x)
    {
        int n=a.size();
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]>x)
            {
                ans = mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int k) {
       vector<int>ans;
        int n=nums.size();
        int lb= lower_bound(nums,k);
        ans.push_back(lb);
        int ub= upper_bound(nums,k);
        ans.push_back(ub-1);
        if(lb==n || nums[lb]!=k)
        { 
            return{-1,-1};
        }
        
            return ans;
        
    }
};