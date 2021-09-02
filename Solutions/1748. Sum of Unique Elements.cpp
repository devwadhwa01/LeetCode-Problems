//Dev Wadhwa

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            int flag=1;
            for(int j=0;j<n;j++)
            {
                if(j==i) continue;
                if(nums[i]==nums[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1) sum+=nums[i];
        }
        return sum;
    }
};
