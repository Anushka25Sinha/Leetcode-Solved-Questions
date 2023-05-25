class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        sort(nums.begin(),nums.end());
        int a=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
             a=mpp[nums[i]]++;
            
        }
        for(auto it:mpp )
        {
            if(it.second>=2)
                return true;
            
        }
        
            return false;
        }
};