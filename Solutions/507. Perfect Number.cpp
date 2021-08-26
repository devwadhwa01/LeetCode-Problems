//Dev Wadhwa

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        int sum=1;
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                sum+=i;
                sum+=num/i;
            }
        }
        if(sum==num) return true;
        else return false;
    }
};
