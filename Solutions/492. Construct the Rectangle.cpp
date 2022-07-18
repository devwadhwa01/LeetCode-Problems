//Dev Wadhwa

class Solution {
public:
    vector<int> constructRectangle(int area) {
        pair<int,int> p;
        vector<pair<int,int>> factors;
        for(int i=1;i<=area;i++)
        {
            if(area%i==0)
            {
                p.first=area/i;
                p.second=i;
                if(p.first<p.second) break;
                factors.push_back(p);
            }
        }
        return {factors[factors.size()-1].first,factors[factors.size()-1].second};
    }
};
