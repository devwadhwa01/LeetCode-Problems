//Dev Wadhwa

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        int m=jewels.size();
        int n=stones.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(jewels[i]==stones[j]) count++;
            }
        }
        return count;
    }
};
