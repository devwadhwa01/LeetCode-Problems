//Dev Wadhwa

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++)
        {
            int digits=0;
            while(nums[i]!=0)
            {
                digits++;
                nums[i]/=10;
            }
            if(digits%2==0) count++;
        }
        return count;
    }
};



//Using log10 to find number of digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++)
        {
            int digit=floor(log10(nums[i])+1);
            if(digit%2==0) count++;
        }
        return count;
    }
};
