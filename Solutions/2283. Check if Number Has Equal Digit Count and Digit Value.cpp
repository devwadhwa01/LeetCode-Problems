//Dev Wadhwa

class Solution {
public:
    bool digitCount(string num) {
        int counts[10]={};
        int n=num.size();
        for(int i=0;i<n;i++)
        {
            counts[(int)num[i]%48]++;
        }
        for(int i=0;i<n;i++)
        {
            if((int)num[i]%48!=counts[i]) return false;
        }
        return true;
    }
};
