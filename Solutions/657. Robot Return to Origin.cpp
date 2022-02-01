//Dev Wadhwa

class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int pos[2]={};
        for(int i=0;i<n;i++)
        {
            if(moves[i]=='L') pos[0]--;
            else if(moves[i]=='R') pos[0]++;
            else if(moves[i]=='U') pos[1]++;
            else pos[1]--;
        }
        if(pos[0]==0 && pos[1]==0) return true;
        else return false;
    }
};
