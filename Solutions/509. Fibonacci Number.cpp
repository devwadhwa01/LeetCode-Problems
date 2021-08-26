//Dev Wadhwa

class Solution {
public:
    int fib(int n) {
        int a=0,b=1;
        if(n==0) return 0;
        else if(n==1) return 1;
        else
        {
            for(int i=0;i<=n-2;i++)
            {
                int temp=b;
                b=a+b;
                a=temp;
            }
        }
        return b;
    }
};
