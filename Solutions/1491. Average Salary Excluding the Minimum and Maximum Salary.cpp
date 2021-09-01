//Dev Wadhwa

class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
        double sum=accumulate(salary.begin()+1,salary.end()-1,0);     //To calculate sum
        return sum/(n-2);
    }
};
