class Solution {
public:
    string reverseWords(string s) {
        string result;
        int n=s.length();
        int i=0;
        while(i<n){
             while(i<n && s[i]==' ')i++;
             if(i>=n) break;
             int j=i+1;
             while(j<n && s[j]!=' ')j++;
              string str=s.substr(i,j-i);
              if(result.length()==0) result=str;
              else result=str+" "+result;
              i=j+1;
        
        }
            
       
        return result;
       
    }
};