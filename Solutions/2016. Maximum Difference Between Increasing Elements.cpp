//Dev Wadhwa

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max=-1,temp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]<nums[j] && i<j)
                {
                    temp=nums[j]-nums[i];
                    if(temp>max) max=temp;
                }
            }
        }
        return max;
    }
};
