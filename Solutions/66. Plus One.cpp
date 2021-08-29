//Dev Wadhwa

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]<9)
        {
            digits[n-1]++;
        }
        else
        {
            o:
            digits[n-1]=0;
            n--;
            if(n-1<0)
            {
                reverse(digits.begin(),digits.end());
                digits.push_back(1);
                reverse(digits.begin(),digits.end());
            }
            else
            {
                if(digits[n-1]<9) digits[n-1]++;
                else goto o;
            }
        }
        return digits;
    }
};
