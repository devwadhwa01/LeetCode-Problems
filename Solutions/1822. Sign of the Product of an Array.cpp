//Dev Wadhwa

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pro=1,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) return 0;
            else if(nums[i]<0) pro*=-1;
        }
        return pro;
    }
};
