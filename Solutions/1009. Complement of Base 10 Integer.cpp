//Dev Wadhwa

class Solution {
public:
    int bitwiseComplement(int n) {
        string bin="";
        int ans=0;
        if(n==0) return 1;
        while(n!=0)
        {
            bin=to_string(n%2)+bin;
            n/=2;
        }
        n=bin.size();
        for(int i=0;i<n;i++)
        {
            if(bin[i]=='0') 
            {
                ans+=pow(2,n-i-1);
            }
        }
        return ans;
    }
};
