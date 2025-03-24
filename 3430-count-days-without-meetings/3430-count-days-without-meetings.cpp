class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int pre=0;

        for(auto & meeting:meetings)
        {
            int start = max(meeting[0],pre+1);
            int length= meeting[1]-start+1;
            days-=max(length,0);
            pre=max(pre,meeting[1]);
        }
        return days;
    }
};