class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>isVowel(n,0);
        for(int i=0;i<n;i++)
        {
            int l=words[i].size()-1;
            if((words[i][0]=='a'|| words[i][0]=='e'|| words[i][0]=='i'||words[i][0]=='o'||words[i][0]=='u'||words[i][0]=='u')&&(words[i][l]=='a'||words[i][l]=='e'||words[i][l]=='i'||words[i][l]=='o'||words[i][l]=='u'))
            isVowel[i]=1;
        }
           
        vector<int>p(n+1,0);
        for(int i=0;i<n;i++)
        {
            p[i+1]=p[i]+isVowel[i];
        }
        vector<int>ans(queries.size());
        for(int i=0;i<queries.size();i++)
        {
            ans[i]=p[queries[i][1]+1]-p[queries[i][0]];
        }
        return ans;
    }
};