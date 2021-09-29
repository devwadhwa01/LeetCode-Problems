//Dev Wadhwa

class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.size();
        string res="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ') k--;
            if(k==0) break;
            res+=s[i];
        }
        return res;
    }
};
