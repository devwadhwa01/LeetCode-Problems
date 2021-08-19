//Dev Wadhwa

class Solution {
public:
    bool isPalindrome(int x) {
        int result=0,x2;
        x2=x;
        while(x!=0)
        {
            int temp=x%10;
            x/=10;
            if(result>INT_MAX/10) return 0;
            if(result<INT_MIN/10) return 0;
            result=result*10+temp;
            
        }
        if(x2==result && result>=0)
            return true;
        else 
            return false;
    }
};
