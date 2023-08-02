class Solution {
    public:
    void solve(vector<vector<int>>& ans, vector<int>& ds, vector<int>& nums, int freq[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(freq[i]==0)
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(ans,ds,nums,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0 ; i<nums.size() ; i++)freq[i]=0;
        solve(ans,ds,nums,freq);
        return ans;
    }
};