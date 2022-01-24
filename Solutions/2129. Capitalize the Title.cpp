//Dev Wadhwa

class Solution {
public:
    string capitalizeTitle(string title) {
        int n=title.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(count==0) title[i]=toupper(title[i]);
            else title[i]=tolower(title[i]);
            count++;
            if(title[i]==' ' || i==n-1)
            {
                if(i!=n-1) count--;
                cout<<count<<" ";
                if(count==1)
                {
                    if(i==n-1) title[i]=tolower(title[i]);
                    else title[i-1]=tolower(title[i-1]);
                }
                else if(count==2)
                {
                    if(i==n-1)
                    {
                        title[i]=tolower(title[i]);
                    }
                    else
                    {
                        title[i-2]=tolower(title[i-2]);
                    }
                    title[i-1]=tolower(title[i-1]);
                }
                count=0;
            }
        }
        return title;
    }
};
