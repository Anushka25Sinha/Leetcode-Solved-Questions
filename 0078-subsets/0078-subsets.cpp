class Solution {
    private:
    void solve(vector<int>& nums, int index, vector<int>one_sub, vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
            ans.push_back(one_sub);
            return;
        }
        
        one_sub.push_back(nums[index]);
        solve(nums, index+1, one_sub, ans);
        
        one_sub.pop_back();
        solve(nums, index+1, one_sub, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
        vector<int> one_sub;
        int index=0;
        solve(nums,index,one_sub,ans);
        return ans;
    }
};