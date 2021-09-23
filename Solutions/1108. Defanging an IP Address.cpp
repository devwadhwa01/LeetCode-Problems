//Dev Wadhwa

class Solution {
public:
    string defangIPaddr(string address) {
        string res="";
        int n=address.size();
        for(int i=0;i<n;i++)
        {
            if(address[i]=='.') res+="[.]";
            else res+=address[i];
        }
        return res;
    }
};
