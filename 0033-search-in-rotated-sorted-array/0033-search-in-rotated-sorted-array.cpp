class Solution {
public:
    int search(vector<int>& nums, int k){
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==k)
            {
                return mid;
            }
            if(nums[low]<=nums[mid])
            {
            if(nums[low]<=k&&nums[mid]>=k)
            {
                high=mid-1;
            }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(nums[high]>=k && nums[mid]<=k)
                {
                   low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};