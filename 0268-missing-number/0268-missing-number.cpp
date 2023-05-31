class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int Asum=0;
        int Esum=(n*(n+1)/2);
        for(int i=0 ; i<n ; i++){
            Asum=Asum+nums[i];
        }
        return Esum-Asum;
    }
};