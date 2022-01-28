//Dev Wadhwa

class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int flagless=0, flagmore=0;
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                if(nums[j]>nums[i]) flagless=1;
                if(nums[j]<nums[i]) flagmore=1;
            }
            if(flagless==1 && flagmore==1) count++;
        }
        return count;
    }
};
