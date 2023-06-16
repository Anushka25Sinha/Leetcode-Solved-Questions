class Solution {
public:
    bool isPalindrome(int x) {
        string r= to_string(x);
        reverse(r.begin(),r.end());
        return to_string(x)==r;
    }
};