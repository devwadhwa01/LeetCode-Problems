//Dev Wadhwa

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> newmat;
        int m=mat.size();
        int n=mat[0].size();
        if(r*c!=m*n) return mat;
        vector<int>temp;
        int tempr=0,tempc=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp.push_back(mat[i][j]);
            }
        }
        vector<int> add;
        int l=0;
        while(tempr!=r)
        {
            for(int i=l;i<l+c;i++)
            {
                add.push_back(temp[i]);
            }
            l+=c;
            newmat.push_back(add);
            tempr++;
            add.clear();
        }
        return newmat;
    }
};
