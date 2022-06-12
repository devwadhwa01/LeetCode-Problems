//Dev Wadhwa

class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string result;
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ') temp=s[i]+temp;
            if(s[i]==' ')
            {
                result+=temp+" ";
                temp="";
            }
            if(i==n-1)
            {
                result+=temp;
                temp="";
            }
        }
        return result;
    }
};
