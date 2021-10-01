//Dev Wadhwa

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        vector<int> squares;
        for(int i=0;i<n;i++)
        {
            if(rectangles[i][0]>rectangles[i][1]) squares.push_back(rectangles[i][1]);
            else squares.push_back(rectangles[i][0]);
        }
        int max=*max_element(squares.begin(),squares.end());
        return count(squares.begin(),squares.end(),max);
    }
};
