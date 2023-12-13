class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0,ans=0,count=0;
        int n=s.size();
        map<char,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
            count=max(count,mpp[s[i]]);
            
            if(i-j+1-count>k)
            {
                mpp[s[j]]--;
                j++;
            }
            
            
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};