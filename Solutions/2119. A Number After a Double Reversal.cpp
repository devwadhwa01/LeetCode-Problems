//Dev Wadhwa

class Solution {
public:
    bool isSameAfterReversals(int num) {
        int n=num;
        int rev1=0;
        int rev2=0;
        while(n!=0)
        {
            rev1=rev1+(n%10);
            n/=10;
            rev1*=10;
        }
        rev1/=10;
        while(rev1!=0)
        {
            rev2+=(rev1%10);
            rev1/=10;
            rev2*=10;
        }
        rev2/=10;
        if(num==rev2) return true;
        else return false;
    }
};
