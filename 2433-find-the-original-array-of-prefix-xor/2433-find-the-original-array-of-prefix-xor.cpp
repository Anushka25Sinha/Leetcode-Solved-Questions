class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        int n=pref.size();
        // ans.push_back(pref[0]);
        for(int i=n-1;i>0;i--)
        {
            // ans.push_back(pref[i-1]^pref[i]);
            pref[i]=pref[i]^pref[i-1];
        }
        return pref;
    }
};