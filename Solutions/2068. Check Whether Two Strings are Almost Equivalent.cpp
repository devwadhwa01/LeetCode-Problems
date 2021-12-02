//Dev Wadhwa

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int counts1[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int counts2[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int n=word1.size();
        for(int i=0;i<n;i++)
        {
            counts1[(int)word1[i]%97]++;
            counts2[(int)word2[i]%97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(abs(counts1[i]-counts2[i])>3) return false;
        }
        return true;
    }
};
