//Dev Wadhwa

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                for(int j=n-1;j>i;j--)        //Making space for insertion of 0
                {
                    arr[j]=arr[j-1];
                }                             
                i++;                          //Incrementing i to skip the added 0
            }
        }
    }
};
