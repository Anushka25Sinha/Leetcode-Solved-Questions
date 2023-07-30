class Solution {
    private:
    void subset_finder(vector<int>& nums, int index, vector<int> one_sub, vector<vector<int>> &ans)
    {
        if(index>=nums.size())
        {
            ans.push_back(one_sub);
            return;
        }
        one_sub.push_back(nums[index]);
        subset_finder(nums,index+1,one_sub,ans);
        
        one_sub.pop_back();
        subset_finder(nums, index+1, one_sub, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>one_sub;
        int index=0;
        subset_finder(nums,index,one_sub,ans);
        
        return ans;
    }
};