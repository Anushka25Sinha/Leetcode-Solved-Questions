class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n =arr.size();
        int a=n/4;
        map<int,int>mpp;
        for(auto it:arr)
        {
            mpp[it]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(mpp[arr[i]]>a)
            {
                return arr[i];
            }
        }
        return -1;
    }
};