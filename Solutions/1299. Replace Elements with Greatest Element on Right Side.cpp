//Dev Wadhwa

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(),max;
        if(n==1) goto o;
        for(int i=0;i<n;i++)
        {
            arr[i]=*max_element(arr.begin()+i+1,arr.end());
        }
        o:
        arr[n-1]=-1;
        return arr;
    }
};
