//Dev Wadhwa

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        stack<int> s;
        int n=prices.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty()) result.push_back(prices[i]);
            else
            {
                while(s.empty()==false && s.top()>prices[i])
                {
                    s.pop();
                }
                if(s.empty()) result.push_back(prices[i]);
                else result.push_back(prices[i]-s.top());
            }
            s.push(prices[i]);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
