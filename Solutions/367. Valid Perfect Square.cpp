//Dev Wadhwa

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        for(int i=1;i<num;i++)
        {
            if(num==(long)i*i) return true;
            if((long)i*i>num) break;
        }
        return false;
    }
};
