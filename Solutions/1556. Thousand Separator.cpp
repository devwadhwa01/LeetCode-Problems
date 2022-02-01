//Dev Wadhwa

class Solution {
public:
    string thousandSeparator(int n) {
        string result="";
        int c=0;
        if(n==0) return "0";
        while(n!=0)
        {
            result=(char)(n%10+48)+result;
            n/=10;
            c++;
            if(c==3)
            {
                result="."+result;
                c=0;
            }
        }
        if(result[0]=='.') result.erase(result.begin());
        return result;
    }
};
