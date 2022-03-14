//Dev Wadhwa

class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        vector<char> stk;
        for(int i=0;i<n;i++)
        {
            if(stk.empty() || stk.back()!=s[i]) stk.push_back(s[i]);
            else stk.pop_back();
        }
        string str="";
        while(!stk.empty())
        {
            str=stk.back()+str;
            stk.pop_back();
        }
        return str;
    }
};
