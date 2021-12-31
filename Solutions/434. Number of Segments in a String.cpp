//Dev Wadhwa

class Solution {
public:
    int countSegments(string s) {
        int n=s.size(),count=0;
        if(s=="") return 0;
        for(int i=0;i<n;i++)
        {
            if((i==0 || s[i-1]==' ') && s[i]!=' ') count++;
        }
        return count;
    }
};
