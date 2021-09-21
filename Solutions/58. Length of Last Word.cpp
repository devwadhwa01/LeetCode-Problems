//Dev Wadhwa

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;
        if(s[n-1]==' ')
        {
            int flag=0;
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]==' ' && flag==0) continue;
                if(s[i]!=' ') count++;
                if(i!=0 && s[i-1]==' ' && s[i]!=' ') break;                
            }
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]==' ') break;
                count++;
            }
        }
        return count;
    }
};
