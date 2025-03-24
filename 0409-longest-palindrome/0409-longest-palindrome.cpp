class Solution {
public:
    int longestPalindrome(string s) {
        int odd=0;
        unordered_map<char,int>mpp;
        for(char ch:s)
        {
            mpp[ch]++;
            if(mpp[ch]%2==0)odd--;
            else odd++;
        }
        if(odd>1)return s.length()-odd+1;
        return s.length();
    }
};