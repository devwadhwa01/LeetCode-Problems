//Dev Wadhwa

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int> s;
        int a,b;
        for(int i=0;i<n;i++)
        {
            if(tokens[i]=="+")
            {
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(a+b);
            }
            else if(tokens[i]=="*")
            {
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(a*b);
            }
            else if(tokens[i]=="-")
            {
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b-a);
            }
            else if(tokens[i]=="/")
            {
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b/a);
            }
            else
            {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
