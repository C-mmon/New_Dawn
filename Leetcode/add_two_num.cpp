
        string ans;
        int store;
        int carry=0;
        for(int i=num1.length()-1,j=num2.length()-1;i>=0 || j>=0 || carry;j--,i--)
        {
            int x=i>=0?num1[i]-'0':0;
            int y=j>=0?num2[j]-'0':0;
            int store=x+y+carry;
            ans.append(to_string(store%10));
            carry=store/10;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
