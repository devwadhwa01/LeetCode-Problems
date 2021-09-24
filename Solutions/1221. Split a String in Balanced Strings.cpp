//Dev Wadhwa

class Solution {
public:
    int balancedStringSplit(string s) {
        int rcount=0,lcount=0,c=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R') rcount++;
            else lcount++;
            if(lcount==rcount)
            {
                c++;
                lcount=0;
                rcount=0;
            }
        }
        return c;
    }
};
