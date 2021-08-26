//Dev Wadhwa

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        while(n!=0)
        {
            if(n%3==0)
            {
                n/=3;
            }
            else return false;
            if(n==1) return true;
        }
        return false;
    }
};
