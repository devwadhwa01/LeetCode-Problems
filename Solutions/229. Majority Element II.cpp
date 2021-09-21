//Dev Wadhwa

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int temp=n/3;
        int count=0;
        nums.push_back(INT_MIN);
        for(int i=0;i<n;i++)
        {
            count++;
            if(nums[i]!=nums[i+1])
            {
                if(count>temp)  res.push_back(nums[i]);
                count=0;
            }
        }
        return res;
    }
};
