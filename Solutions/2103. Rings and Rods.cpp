//Dev Wadhwa

class Solution {
public:
    int countPoints(string rings) {
        int rcount[10]={};      //To initialize all elements of an array with 0
        int gcount[10]={};
        int bcount[10]={};
        int n=rings.size();
        int count=0;
        for(int i=1;i<n;i+=2)
        {
            if(rings[i-1]=='R') rcount[rings[i]-48]++;
            else if(rings[i-1]=='G') gcount[rings[i]-48]++;
            else bcount[rings[i]-48]++;
        }
        for(int i=0;i<10;i++)
        {
            if(rcount[i]==0||gcount[i]==0||bcount[i]==0) continue;
            else count++;
        }
        return count;
    }
};
