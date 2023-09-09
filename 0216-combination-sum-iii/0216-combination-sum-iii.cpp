class Solution {
public:
    void combination(int index, int k, int n, vector<vector<int>>&ans,vector<int>&comb)
    {
        if(n==0 && comb.size()==k)
        {
            ans.push_back(comb);
            return;
        }
        if(comb.size()<k)
        {
            for(int i=index ;i<=9;i++)
            {
                if(n-i<0)break;
                comb.push_back(i);
                combination(i+1,k,n-i,ans,comb);
                comb.pop_back();
               
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>comb;
        combination(1,k,n,ans,comb);
        return ans;
    }
};