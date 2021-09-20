//Dev Wadhwa

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res;
        int n=nums.size();
        if(k>n) k%=n;
        for(int i=n-k;i<n;i++)
        {
            res.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++)
        {
            res.push_back(nums[i]);
        }
        nums=res;
    }
};


//Better Approach (O(1) space complexity)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);
    }
};
