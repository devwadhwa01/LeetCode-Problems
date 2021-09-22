//Dev Wadhwa

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans=-1,n=nums.size();
        int max=*max_element(nums.begin(),nums.end());
        if(n==1) return 0;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]==max)
                {
                    ans=i;
                    continue;
                }
                if(2*nums[i]>max) return -1;   
            }
        }
        return ans;
    }
};
