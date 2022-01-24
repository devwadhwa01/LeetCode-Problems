//Dev Wadhwa

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int lsum=0;
        vector<int> leftsums;
        vector<int> sumexcept;
        leftsums.push_back(0);
        for(int i=1;i<n;i++)
        {
            lsum+=nums[i-1];
            leftsums.push_back(lsum);
        }
        for(int i=0;i<n;i++)
        {
            sumexcept.push_back(sum-nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(2*leftsums[i]==sumexcept[i]) return i;
        }
        return -1;
    }
};
