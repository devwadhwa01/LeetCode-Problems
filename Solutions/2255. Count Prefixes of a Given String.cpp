//Dev Wadhwa

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int len=words[i].size();
            if(words[i]==s.substr(0,len)) count++;
        }
        return count;
    }
};
