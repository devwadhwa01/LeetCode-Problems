//Dev Wadhwa

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int peak=0;
        if(n<3) return false;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                peak=i;
                count++;
            }
        }
        if(count!=1) return false;
        else
        {
            for(int i=0;i<peak-1;i++)
            {
                if(arr[i]>=arr[i+1]) return false;            //Strictly increasing
            }
            for(int i=peak;i<n-1;i++)
            {
                if(arr[i]<=arr[i+1]) return false;            //Strictly decreasing
            }
        }
        return true;
    }
};
