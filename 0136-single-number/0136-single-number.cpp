class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mpp;
        int a;
        for(int i=0 ; i<nums.size() ; i++)
        {
            mpp[nums[i]]++;
        }
        for(auto x:mpp)
        {
            if(x.second==1)
                 a= x.first;
        }
     return a;       
    }
};