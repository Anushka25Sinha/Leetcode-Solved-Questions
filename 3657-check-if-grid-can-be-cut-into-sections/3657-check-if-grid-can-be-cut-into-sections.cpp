class Solution {
public:
    bool solver(vector<vector<int>>&rectangles, int axis)
    {
        sort(rectangles.begin(), rectangles.end(), [axis](vector<int>&a, vector<int>&b)
        {return a[axis]<b[axis];});

        int cuts=0 , prev=-1;

        for(auto& rect:rectangles)
        {
            int start=rect[axis];
            int end=rect[axis+2];
            if(start>=prev)cuts++;
            prev=max(prev,end);
            if(cuts>=3)return true;
        }
        return false;

    }

    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        return solver(rectangles,0)|| solver(rectangles,1);
    }
};