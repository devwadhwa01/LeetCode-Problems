//Dev Wadhwa

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        for(int i=0;i<n;i++)
        {
            if ((int)target>=(int)letters[n-1]) return letters[0];
            if ((int)target<(int)letters[i]) return letters[i];
        }
        return ' ';
    }
};
