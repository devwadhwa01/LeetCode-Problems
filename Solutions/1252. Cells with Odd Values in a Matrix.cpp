//Dev Wadhwa

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count=0;
        int matrix[m][n];
        int len=indices.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=0;
            }
        }
        for(int i=0;i<len;i++)
        {
            int r=indices[i][0];
            int c=indices[i][1];
            for(int j=0;j<n;j++)
            {
                matrix[r][j]++;
            }
            for(int j=0;j<m;j++)
            {
                matrix[j][c]++;
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]%2!=0) count++; 
            }
        }
        return count;
    }
};
