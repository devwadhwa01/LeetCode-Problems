//Dev Wadhwa

class Solution {
public:
    bool match(char a, char b)
    {
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    bool isValid(string s) {
        stack<int> arr;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') arr.push(s[i]);
            else
            {
                if(arr.empty()==true) return false;
                else if(match(arr.top(),s[i])==false) return false;
                else arr.pop();
            }
        }
        return (arr.empty()==true);
    }
};
