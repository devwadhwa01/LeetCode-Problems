//Dev Wadhwa

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            arr[(int)s[i]%97]++;
        }
        int temp=0,flag=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0) continue;
            if(arr[i]!=0 && flag==0) 
            {
                temp=arr[i];
                flag=1;
            }
            if(arr[i]!=temp) return false;
        }
        return true;
    }
};
