//Dev Wadhwa

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        int temp=edges[0][0];
        for(int i=0;i<n;i++)
        {
            if(edges[i][0]==temp || edges[i][1]==temp) continue;
            else return edges[0][1];
        }
        return temp;
    }
};


//Better Solution O(1) time and space
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0]==edges[1][0] || edges[0][0]==edges[1][1]) return edges[0][0];
        else return edges[0][1];
    }
};
