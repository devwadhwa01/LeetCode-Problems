//Dev Wadhwa

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> result;
        int n=s.size();
        int left=n%k;
        string temp="";
        int tempk=0;
        for(int i=0;i<n;i++)
        {
            temp+=s[i];
            tempk++;
            if(tempk==k)
            {
                result.push_back(temp);
                tempk=0;
                temp="";
            }
        }
        if(left==0) return result;
        for(int i=0;i<k-left;i++)
        {
            temp+=fill;
        }
        result.push_back(temp);
        return result;
    }
};
