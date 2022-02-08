//Dev Wadhwa

class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int temp=s[i]%96;
            while(temp!=0)
            {
                sum+=temp%10;
                temp/=10;
            }
        }
        k--;
        int num=sum;
        while(k!=0)
        {
            sum=0;
            int temp=num;
            while(temp!=0)
            {
                sum+=temp%10;
                temp/=10;
            }
            num=sum;
            k--;
        }
        return sum;
    }
};
