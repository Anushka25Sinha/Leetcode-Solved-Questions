class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeroes=0, i=0,ans=-1;
        int n=nums.size();
        for(int j=0;j<n;j++)
        {
            if(nums[j]==0)
            {
                zeroes++;
            }
            while(zeroes>k)
            {
                if(nums[i]==0)
                {
                    zeroes--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};