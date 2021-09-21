//Dev Wadhwa

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        int n=operations.size();
        for(int i=0;i<n;i++)
        {
            if(operations[i][0]=='-' || operations[i][2]=='-') res--;
            else res++;
        }
        return res;
    }
};
