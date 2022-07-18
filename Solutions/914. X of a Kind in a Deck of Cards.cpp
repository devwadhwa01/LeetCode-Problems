//Dev Wadhwa

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> umap;
        int n=deck.size();
        for(int i=0;i<n;i++)
        {
            umap[deck[i]]++;
        }
        auto it=umap.begin();
        int gcdall=it->second;
        for(it=umap.begin();it!=umap.end();it++)
        {
            gcdall=__gcd(gcdall,it->second);
        }
        if(gcdall<2) return false;
        return true;
    }
};
