//Dev Wadhwa

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector <int> result;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target) result.push_back(i);
            if(nums[i]>target) break;
        }
        return result;
    }
};
