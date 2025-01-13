class Solution {
public:
    int minimumLength(string s) {
        vector<int>freq(26,0);
        int len=0;
        for( char c:s)
        {
            freq[c-'a']++;
        }

        for(int f : freq)
        {
            if(f==0)continue;
            if(f%2==0)
            {
                len+=2;
            }
            else
            {
                len+=1;
            }
        }
        return len;
    }
};