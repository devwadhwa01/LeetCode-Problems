//Dev Wadhwa

class Solution {
public:
    string interpret(string command) {
        int n=command.size();
        string res="";
        for(int i=0;i<n;i++)
        {
            if(command[i]=='G') res+=command[i];
            else 
            {
                if(command[i]=='(' && command[i+1]==')')
                    res+="o";
                else if(command[i+1]=='a')
                {
                    res+="al";
                }
            }
        }
        return res;
    }
};
