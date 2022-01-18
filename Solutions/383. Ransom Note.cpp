//Dev Wadhwa

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r_arr[26]={}, m_arr[26]={};
        int r=ransomNote.size();
        int m=magazine.size();
        for(int i=0;i<r;i++)
        {
            r_arr[(int)ransomNote[i]%97]++;
        }
        for(int i=0;i<m;i++)
        {
            m_arr[(int)magazine[i]%97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(r_arr[i]>m_arr[i]) return false;
        }
        return true;
    }
};
