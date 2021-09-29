//Dev Wadhwa

class Solution {
public:
    string replaceDigits(string s) {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                s[i]=s[i-1]+(int)s[i]-48;
            }
        }
        return s;
    }
};
