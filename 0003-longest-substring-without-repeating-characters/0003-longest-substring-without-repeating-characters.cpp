class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length=0,maxlength=0,j=0;
        int n=s.size();
        map<char,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
            length++;
            
            while(mpp[s[i]]>1)
            {
                mpp[s[j++]]--;
                length--;
            }
            maxlength=max(maxlength,length);
        }
        return maxlength;
    }
};