class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int curr=0;
        int ans=0;
        for(int i=0;i<g.size();i++)
        {
            if(curr<s.size() && s[curr]>=g[i])
            {
                ans++;
                curr++;
            }
        }   
        
        return ans;
    }
};