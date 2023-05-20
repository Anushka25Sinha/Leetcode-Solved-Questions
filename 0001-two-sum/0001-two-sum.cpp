class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>m;
        for(int i=0; i<nums.size(); i++)
           m[nums[i]]=i;
        for(int i=0; i<nums.size() ;i++)
        {
            int diffrence=target-nums[i];
            if(m.count(diffrence)&& i!=m[diffrence])
                return{i, m[diffrence]};
        }
    return {};
    }
};