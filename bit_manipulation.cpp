
    int t;
    cin>>t;
    int count=0;
    int a=32;
    int test=1;
    while(a--)
    {
        if(test&t)
        {
            count++;
        }
        test=test<<1;
        
        
    }
    cout<<count--<<endl;
