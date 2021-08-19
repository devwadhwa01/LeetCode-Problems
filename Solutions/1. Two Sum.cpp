//Dev Wadhwa

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(i!=j && nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    goto o;
                }
            }
        }
        o:
        return result;
    }
};
