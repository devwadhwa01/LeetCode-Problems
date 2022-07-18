//Dev Wadhwa

class Solution {
public:
    int numPrimeArrangements(int n) {
        int count=0;
        for(int i=2;i<=n;i++)
        {
            int ctr=1;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    ctr=0;
                }
            }
            if(ctr==1) count++;
        }
        long answer=1;
        for(int i=1;i<=count;i++)
        {
            answer=(answer*i)%1000000007;
        }
        for(int i=1;i<=n-count;i++)
        {
            answer=(answer*i)%1000000007;
        }
        return answer;
    }
};
