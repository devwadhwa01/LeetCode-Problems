//Dev Wadhwa

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        string ans=s;           //Initialized with s so that it can be modified (same string length) or would have had to use a character array
        for(int i=0;i<n;i++)
        {
            ans[indices[i]]=s[i];
        }
        return ans;
    }
};
