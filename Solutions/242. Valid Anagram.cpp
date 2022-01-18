//Dev Wadhwa

class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_arr[26]={}, t_arr[26]={};
        int s_len=s.size();
        int t_len=t.size();
        for(int i=0;i<s_len;i++)
        {
            s_arr[(int)s[i]%97]++;
        }
        for(int i=0;i<t_len;i++)
        {
            t_arr[(int)t[i]%97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(s_arr[i]!=t_arr[i]) return false;
        }
        return true;
    }
};
