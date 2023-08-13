class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
            
            else
            {
              if(st.empty())return false;
                char c=st.top();
               if(s[i]==')' && c=='(') st.pop();
                else if(s[i]==']' && c=='[') st.pop();
                else if(s[i]=='}' && c=='{') st.pop();
                else return false;
            }
            
                
      }
        return st.empty();
    }
};