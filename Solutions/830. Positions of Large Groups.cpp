//Dev Wadhwa

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n=s.size();
        vector<vector<int>> result;
        string temp="";
        int c=0;
        for(int i=0;i<n;i++)
        {
            temp+=s[i];
            c++;
            if(s[i]!=s[i+1] || i==n-1)
            {
                vector<int> index;
                if(c>=3)
                {
                    index.push_back(i-c+1);
                    index.push_back(i);
                    result.push_back(index);
                }
                temp="";
                c=0;
            }
        }
        return result;
    }
};
