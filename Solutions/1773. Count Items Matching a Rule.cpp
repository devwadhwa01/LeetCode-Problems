//Dev Wadhwa

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=2,count=0;
        if(ruleKey=="type") c=0;
        else if(ruleKey=="color") c=1;
        int n=items.size();
        for(int i=0;i<n;i++)
        {
            if(items[i][c]==ruleValue) 
            {
                count++;
            }
        }
        return count;
    }
};
