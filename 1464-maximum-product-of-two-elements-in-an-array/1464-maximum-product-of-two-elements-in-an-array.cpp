class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        int CurMax=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            ans=max(ans,(CurMax-1)*(nums[i]-1)); 
            CurMax=max(CurMax,nums[i]);   
        }
        return ans;
    }
};

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int res = 0;
//         int curMax = nums[0];

//         for (int i = 1; i < nums.size(); i++) {
//             res = max(res, (curMax - 1) * (nums[i] - 1));
//             curMax = max(curMax, nums[i]);
//         }

//         return res;        
//     }
// };


