//Dev Wadhwa

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        for(int i=0;i<n-1;i+=2)
        {
            for(int j=0;j<nums[i];j++)
            {
                result.push_back(nums[i+1]);
            }
        }
        return result;
    }
};
