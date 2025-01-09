class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zcount=0;
        int longestWindow=0;
        int start=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            zcount++;

            while(zcount>1)
            {
                zcount-= (nums[start]==0);
                start++;
            }
            longestWindow = max(longestWindow,i-start);
        }
        return longestWindow;
    }
};