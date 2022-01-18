//Dev Wadhwa

//Not the right method for the solution

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        int pro=1;
        int has0=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                has0++;
                continue;
            }
            pro*=nums[i];
        }
        if(has0>1)
        {
            for(int i=0;i<n;i++)
            {
                res.push_back(0);
            }
        }
        else if(has0==1)
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]==0) res.push_back(pro);
                else res.push_back(0);
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                res.push_back(pro/nums[i]);
            }
        }
        return res;
    }
};
