class Solution {
public:
    int romanToInt(string s) {
        int temp=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]=='I')
            {
                temp+=1;
            }
            else if(s[i]=='V')
            {
                temp+=5;
            }
             else if(s[i]=='X')
            {
                temp+=10;
            }
             else if(s[i]=='L')
            {
                temp+=50;
            }
             else if(s[i]=='C')
            {
                temp+=100;
            }
             else if(s[i]=='D')
            {
                temp+=500;
            }
             else if(s[i]=='M')
            {
                temp+=1000;
            }
           
        }
         for(int i=0 ; i<s.size();i++)
            {
                if((s[i]=='I')&&(s[i+1]=='V'))
                {
                    temp=temp-2;
                }
                else if((s[i]=='I')&&(s[i+1]=='X'))
                {
                    temp=temp-2;
                }
                else if((s[i]=='X')&&(s[i+1]=='L'))
                {
                    temp=temp-20;
                }
                else if((s[i]=='X')&&(s[i+1]=='C'))
                {
                    temp=temp-20;
                }
                else if((s[i]=='C')&&(s[i+1]=='D'))
                {
                    temp=temp-200;
                }
                else if((s[i]=='C')&&(s[i+1]=='M'))
                {
                    temp=temp-200;
                }

            }
        return temp;
    }
};