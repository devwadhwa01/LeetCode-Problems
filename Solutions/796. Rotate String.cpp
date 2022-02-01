//Dev Wadhwa

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            s.push_back(s[0]);
            s.erase(s.begin());
            if(s==goal) return true;
        }
        return false;
    }
};
