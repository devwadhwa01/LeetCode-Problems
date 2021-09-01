//Dev Wadhwa

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++)
        {
            int digits=0;
            while(nums[i]!=0)
            {
                digits++;
                nums[i]/=10;
            }
            if(digits%2==0) count++;
        }
        return count;
    }
};
