//Dev Wadhwa

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++)
        {
            int n=i,flag=1;
            while(n!=0)
            {
                int temp=n%10;
                if(temp==0 || i%temp!=0)
                {
                    flag=0;
                    break;
                }
                n/=10;
            }
            if(flag==1) result.push_back(i);
        }
        return result;
    }
};
