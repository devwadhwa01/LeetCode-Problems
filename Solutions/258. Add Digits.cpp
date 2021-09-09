//Dev Wadhwa

class Solution {
public:
    int addDigits(int num) {
        int sum;
        o:
        sum=0;
        while(num!=0)
        {
            sum+=num%10;
            num/=10;
        }
        if(sum>9)
        {
            num=sum;
            goto o;
        }
        return sum;
    }
};
