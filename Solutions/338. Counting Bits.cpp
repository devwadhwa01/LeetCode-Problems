//Dev Wadhwa

class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ones;
        for(int i=0;i<=n;i++)
        {
            int temp=i,count=0;
            while(temp!=0)
            {
                if(temp%2==1) count++;
                temp/=2;
            }
            ones.push_back(count);
        }
        return ones;
    }
};
