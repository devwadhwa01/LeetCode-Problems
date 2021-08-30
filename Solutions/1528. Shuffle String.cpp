//Dev Wadhwa

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        char res[n];
        string ans="";
        for(int i=0;i<n;i++)
        {
            res[indices[i]]=s[i];
        }
        for(int i=0;i<n;i++)
        {
            ans+=res[i];
        }
        return ans;
    }
};
