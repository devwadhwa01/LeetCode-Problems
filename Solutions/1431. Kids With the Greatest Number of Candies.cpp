//Dev Wadhwa

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCount=*max_element(candies.begin(),candies.end());
        int n=candies.size();
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxCount) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};
