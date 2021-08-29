//Dev Wadhwa

class Solution {
public:
    string convertToBase7(int num) {
        if (num==0) return "0";
        string result="";
        int flag=1;
        if(num<0)
        {
            num=-num;
            flag=0;
        }
        while(num!=0)
        {
            result=to_string(num%7)+result;
            num/=7;
        }
        if(flag==0) return "-"+result;
        return result;
    }
};
