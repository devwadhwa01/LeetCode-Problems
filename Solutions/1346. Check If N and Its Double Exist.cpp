//Dev Wadhwa

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                if(arr[i]==2*arr[j]) return true;
            }
        }
        return false;
    }
};
