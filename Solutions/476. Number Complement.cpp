//Dev Wadhwa

class Solution {
public:
    int findComplement(int num) {
        string bin="";
        int ans=0;
        while(num!=0)
        {
            bin=to_string(num%2)+bin;
            num/=2;
        }
        int n=bin.size();
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
