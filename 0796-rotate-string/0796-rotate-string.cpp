class Solution {
public:
    bool rotateString(string s, string g) {
        int a=s.size();
        int b=g.size();
        if(a!=b)
            return false;
        if(s==g)
            return true;
        while(b--)
        {
            if(s==g)
                return true;
            s=s.substr(1)+s[0];
        }
        return false;
    }
};