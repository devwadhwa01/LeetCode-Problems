//Dev Wadhwa

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int len=searchWord.size();
        int n=sentence.size();
        string temp="";
        int count=0;
        for(int i=0;i<n;i++)
        {
            temp+=sentence[i];
            if(sentence[i]==' ' || i==n-1)
            {
                count++;
                if(temp.substr(0,len)==searchWord) return count; 
                temp="";
            }
        }
        return -1;
    }
};
