//Dev Wadhwa

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                count++;
                for(int j=i;j<n-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                n--;
                i--;
            }
        }
        return n;
    }
};
