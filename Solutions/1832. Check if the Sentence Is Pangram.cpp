//Dev Wadhwa

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int n=sentence.size();
        for(int i=0;i<n;i++)
        {
            arr[(int)sentence[i]%97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0) return false;
        }
        return true;
    }
};
