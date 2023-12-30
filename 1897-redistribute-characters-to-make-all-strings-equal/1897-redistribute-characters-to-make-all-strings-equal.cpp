class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mpp;
        int n=words.size();
        for(auto i:words)
        {
            for(auto s:i)
            {
                mpp[s]++;
            }
        }
        
        for(auto i:mpp)
        {
            if(i.second%n) return false;
        }
        return true;
    }
};