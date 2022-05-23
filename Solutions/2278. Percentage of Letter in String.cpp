//Dev Wadhwa

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int len=s.size();
        int count=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]==letter) count++;
        }
        return round((count*100)/len);
    }
};
