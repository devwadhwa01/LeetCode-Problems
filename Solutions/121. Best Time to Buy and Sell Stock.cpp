//Dev Wadhwa

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0,min=prices[0],res=0;
        int n=prices.size();
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
                max=min;
            }
            if(prices[i]>max) max=prices[i];
            if(max-min>res) res=max-min;
        }
        if(prices[n-1]-min>res) res=prices[n-1]-min;
        return res;
    }
};
