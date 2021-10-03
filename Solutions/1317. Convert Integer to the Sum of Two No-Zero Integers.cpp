//Dev Wadhwa

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> result;
        int a=1,b=n-1;
        int temp1,temp2;
        o:
        temp1=a;
        temp2=b;
        while(temp1!=0)
        {
            if(temp1%10!=0)
            {
                temp1/=10;
            }
            else
            {
                a++;
                b--;
                goto o;
            }
        }
        while(temp2!=0)
        {
            if(temp2%10!=0)
            {
                temp2/=10;
            }
            else
            {
                a++;
                b--;
                goto o;
            }
        }
        result.push_back(a);
        result.push_back(b);
        return result;
    }
};
