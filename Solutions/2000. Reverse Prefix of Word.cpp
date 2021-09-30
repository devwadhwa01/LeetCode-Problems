//Dev Wadhwa

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch)
            {
                c=i+1;
                break;
            }
        }
        reverse(word.begin(),word.begin()+c);
        return word;
    }
};
