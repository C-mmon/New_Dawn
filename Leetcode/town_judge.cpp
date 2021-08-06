
        vector <int> inward (n+1,0); //N+1 because N is labelled from 1
        vector <int> outward(n+1,0);
        for(int i=0;i<trust.size();i++)
        {
            inward[trust[i][1]]++;
            outward[trust[i][0]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(inward[i]==n-1 && outward[i]==0)
            {
                return i;
            }
        }
        return -1;
