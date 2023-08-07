class Solution {
    int f(int i, int j, vector<vector<int>>& matrix,vector<vector<int>>& dp){
        if(j<0 || j>=matrix[0].size()) return 1e8;
        if(i==0) return matrix[0][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int u= matrix[i][j] + f(i-1,j,matrix,dp);
        int l= matrix[i][j] + f(i-1,j-1,matrix,dp);
        int r= matrix[i][j] + f(i-1,j+1,matrix,dp);
         
        return dp[i][j]= min(u , min(l,r));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        
        for(int j=0 ; j<m ; j++) dp[0][j]=matrix[0][j];
        
        for(int i=1; i<n ; i++)
        {
            for(int j=0 ;j<m ; j++)
            {
               int u= matrix[i][j] + dp[i-1][j];
               int l= matrix[i][j];
                if(j-1>=0) l+=dp[i-1][j-1];
                else l += 1e8;
                
               int r= matrix[i][j];
                if(j+1<m) r+=dp[i-1][j+1];
                else r+=1e8;
                
            dp[i][j]= min(u , min(l,r));     
        }
    }
     int mini= 1e8;
        for(int j=0 ; j<m ; j++){
            mini=min(mini,dp[n-1][j]);
        }
        return mini;
    }
};