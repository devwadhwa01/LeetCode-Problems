//Dev Wadhwa

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len_nums2=nums2.size();
        for(int i=0;i<len_nums2;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2!=0) return (double)nums1[(n-1)/2];
        else return (double) (nums1[(n-1)/2]+nums1[((n-1)/2)+1])/2;
    }
};
