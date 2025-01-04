class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char, vector<int>> mpp;
        for(int i=0 ;i<s.size() ; i++)
        {
            mpp[s[i]].push_back(i);
        }

        int ans=0;
        for(auto it:mpp)
        {
            vector<int>ind = it.second;
            int st= ind[0];
            int e = ind[ind.size()-1];

            if(e-st<=1)
            {
                continue;
            }
            else
            {
                map<char, int> mp;
                for(int i=st+1;i<e;i++)
                {
                    mp[s[i]]++;
                }
                ans+=mp.size();
                            }
        }
        return ans;
    }
};