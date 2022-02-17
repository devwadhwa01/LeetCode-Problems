//Dev Wadhwa

class Solution {
public:
    int countOperations(int num1, int num2) {
        int count=0;
        while(num1!=0 && num2!=0)
        {
            (num1>=num2) ? num1-=num2 : num2-=num1;
            count++;
        }
        return count;
    }
};
