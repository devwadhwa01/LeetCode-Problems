//Dev Wadhwa

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        while(n!=0)
        {
            if(n%4==0)
            {
                n/=4;
            }
            else return false;
            if(n==1) return true;
        }
        return false;
    }
};
