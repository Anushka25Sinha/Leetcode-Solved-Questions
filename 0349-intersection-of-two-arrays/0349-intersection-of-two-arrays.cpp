class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //    sort(nums1.begin(),nums1.end());
    //    sort(nums2.begin(),nums2.end());
    int n1=nums1.size();
    int n2=nums2.size();
    vector<int>ans;

    set<int>one(nums1.begin(),nums1.end());
    set<int>Ans;
    for(int i=0;i<n2;i++)
    {
        if(one.count(nums2[i]))
        {
            Ans.insert(nums2[i]);
        }

    }
    for(auto nums:Ans)
    {
        ans.push_back(nums);
    }
    return ans;
    }
};