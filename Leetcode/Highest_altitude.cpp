
        auto it = gain.insert(gain.begin(), 1, 0);
        int max=0;
        for(int i=1;i<gain.size();i++)
        {
            gain[i]=gain[i]+gain[i-1];
            if(gain[i]>max && gain[i]>0)
            {
                max=gain[i];
            }
            

        }
        return max;
