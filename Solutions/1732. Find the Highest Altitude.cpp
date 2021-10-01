//Dev Wadhwa

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=gain[i];
            gain[i]=sum;
        }
        int max=*max_element(gain.begin(),gain.end());
        if(max>0) return max;
        else return 0;
    }
};
