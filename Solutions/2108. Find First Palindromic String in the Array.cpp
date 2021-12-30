//Dev Wadhwa

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            string temp="";
            temp=words[i];
            reverse(temp.begin(),temp.end());
            if(temp==words[i]) return temp;
        }
        return "";
    }
};
