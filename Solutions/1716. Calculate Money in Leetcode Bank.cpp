//Dev Wadhwa

class Solution {
public:
    int totalMoney(int n) {
        int money=0, div=n/7,rem=n%7;
        if(rem>0)
            money+=(div*rem)+(rem*(rem+1)/2);
        if(div>=1)
            money+=28*div+7*(div*(div-1))/2;
        return money;
    }
};
