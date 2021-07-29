class Solution {
public:
    string decodeString(string s) 
    {
        stack<char> ans;
        string cool="";
            for(int i=0;i<s.length();i++)
            {   //we have to insert all elements until and unlesss we detect ']'
                if(s[i]!=']')
                {
                    ans.push(s[i]);
                }
                else
                {   string res="";
                    while(ans.top()!='[')
                    {
                        res+=ans.top();
                        ans.pop();
                    }    
                    ans.pop(); //we do not require the '['
                    string num="";
                 
                    while(!ans.empty() && ans.top()>='0' && ans.top()<='9')
                    {
                        num+=ans.top();
                        ans.pop();
                    }
                    reverse(num.begin(),num.end());
                    reverse(res.begin(),res.end());


                    int n=stoi(num);
                    for(int i=0;i<n;i++)
                    {
                        //we cannot use 
                        for(int j=0;j<res.length();j++)
                        {
                        ans.push(res[j]);
                        }
                    }
                }
            }
        while(!ans.empty())
        {
            cool+=ans.top();
            ans.pop();
        }
        reverse(cool.begin(),cool.end());
        return cool;
    }
};
