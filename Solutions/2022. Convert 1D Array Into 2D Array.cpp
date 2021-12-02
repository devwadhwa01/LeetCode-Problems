//Dev Wadhwa

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int len=original.size();
        vector<vector<int>> result;
        if(m*n!=len) return result;
        int l=0,r=n;
        for(int i=0;i<m;i++)
        {
            vector<int> temp;
            for(int j=l;j<r;j++)
            {
                temp.push_back(original[j]);
            }
            l+=n;
            r+=n;
            result.push_back(temp);
        }
        return result;
    }
};
