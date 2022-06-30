//Dev Wadhwa

class Solution {
public:
    string greatestLetter(string s) {
        int upper[26]={};
        int lower[26]={};
        string answer="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(isupper(s[i])) upper[(int)s[i]%65]++;
            else if(islower(s[i])) lower[(int)s[i]%97]++;
        }
        for(int i=25;i>=0;i--)
        {
            if(upper[i]>0 && lower[i]>0)
            {
                answer=(char)i+65;
                break;
            }
        }
        return answer;
    }
};
