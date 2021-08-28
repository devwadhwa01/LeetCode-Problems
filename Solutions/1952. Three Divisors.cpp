//Dev Wadhwa

class Solution {
public:
    bool isThree(int n) {
        int count=1,root=sqrt(n);
        if(n%root!=0 || n==2 || n==1 || root*root!=n) return false;
        for(int i=2;i<root;i++)
        {
            if(root%i==0)
                return false;
        }
        return true;
    }
};
