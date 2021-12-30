//Dev Wadhwa

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int max=0;
        for(int i=0;i<n;i++)
        {
            int temp=0;
            int len=sentences[i].size();
            for(int j=0;j<len;j++)
            {
                if(sentences[i][j]==' ') temp++;
            }
            temp++;
            if(temp>max) max=temp;
        }
        return max;
    }
};
