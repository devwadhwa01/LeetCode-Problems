//Dev Wadhwa

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int x1=points[0][0], y1=points[0][1];
        int x2=points[1][0], y2=points[1][1];
        int x3=points[2][0], y3=points[2][1];
        if((x1==x2 && y1==y2) || (x2==x3 && y2==y3) || (x3==x1 && y3==y1)) return false;
        float m1=(float)(x2-x1)/(float)(y2-y1);
        float m2=(float)(x3-x2)/(float)(y3-y2);
        float m3=(float)(x3-x1)/(float)(y3-y1);
        if(m1==m2 || m2==m3 || m3==m1) return false;
        return true;
    }
};
