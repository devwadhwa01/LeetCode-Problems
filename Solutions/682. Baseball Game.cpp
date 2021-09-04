//Dev Wadhwa

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> res;
        int n=ops.size();
        for(int i=0;i<n;i++)
        {
            if(ops[i]=="C")
            {
                res.pop_back();
            }
            else if(ops[i]=="D")
            {
                res.push_back(2*res[res.size()-1]);
            }
            else if(ops[i]=="+")
            {
                res.push_back(res[res.size()-1]+res[res.size()-2]);
            }
            else
                res.push_back(stoi(ops[i]));
        }
        int sum=accumulate(res.begin(),res.end(),0);
        return sum;
    }
};
