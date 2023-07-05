class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        for(int i=32 ; i>=0 ; i--)
        {
            int current=(1LL<<i)&start;
            int required=(1LL<<i)&goal;
            if(required!=current)
                count++;
        }
        return count;
    }
};