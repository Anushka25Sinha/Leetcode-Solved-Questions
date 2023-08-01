class Solution {
    public:
    void findCombination(vector<int>& arr, int index, vector<int> &ds, vector<vector<int>>& ans, int target)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=index ; i<arr.size() ; i++)
        {
            if(i>index && arr[i]==arr[i-1]) continue;
            if(arr[i]>target)break;
            ds.push_back(arr[i]);
            findCombination(arr,i+1,ds,ans,target-arr[i]);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(candidates,0,ds,ans,target);
        return ans;
        
    }
};