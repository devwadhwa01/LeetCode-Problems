//Dev Wadhwa

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        int unique=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1]) unique++;
            if(unique==3) return nums[i+1];
        }
        return nums[0];
    }
};
