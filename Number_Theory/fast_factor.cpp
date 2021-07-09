vector <long long> factors(int x)
{
    vector <long long> store;

    int i=1;
    while(i*i<=x)
    {
        if(x%i==0)
        {
            store.push_back(i);
            if(x/i!=i)
            {
                store.push_back(x/i);
            }
        }
        i++;
    }
}
