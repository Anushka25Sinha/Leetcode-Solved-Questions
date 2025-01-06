class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans,pos;
        int n= boxes.size();
        for(int i=0 ;i<n; i++)
        {
            if(boxes[i]=='1')
            {
                pos.push_back(i);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int sum=0;

            for(int it:pos)
            {
                int d=abs(i-it);
                sum+=d;
            }
            ans.push_back(sum);
        }
        return ans;

    }
};