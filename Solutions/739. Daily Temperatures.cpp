//Dev Wadhwa

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> days;
        stack<pair<int,int>> s;
        pair<int,int> p;
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
                days.push_back(0);
            }
            else
            {
                while(s.empty()==false && s.top().second<=temperatures[i])
                {
                    s.pop();
                }
                if(s.empty()) days.push_back(0);
                else days.push_back(s.top().first-i);
            }
            p.first=i;
            p.second=temperatures[i];
            s.push(p);
        }
        reverse(days.begin(),days.end());
        return days;
    }
};
