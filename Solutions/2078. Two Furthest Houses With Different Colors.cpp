//Dev Wadhwa

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max=0,temp;
        int n=colors.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(colors[i]==colors[j]) continue;
                temp=abs(i-j);
                if(temp>max) max=temp;
            }
        }
        return max;
    }
};
