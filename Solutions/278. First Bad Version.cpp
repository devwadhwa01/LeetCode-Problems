//Dev Wadhwa

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        bool temp=isBadVersion(n);
        while(temp!=false)
        {
            temp=isBadVersion(n);
            if(temp==true) n--;
        }
        return n+1;
    }
};
