class Solution {
public:
    
        vector<string>aux={"","","abc","def","ghi","jkl","mno","prqs","tuv","wxyz"},ans;
    vector <int> len={0,0,3,3,3,3,3,4,3,4};
    string digit;
    
    void helper(string tmp,int index)
    {
        if(index==digit.length())
        {
            ans.push_back(tmp);
            return;
            
        }
        
        for(int i=0;i<len[digit[index]-'0'];i++)
        {
            //push 
            tmp.push_back(aux[digit[index]-'0'][i]);
            
            helper(tmp,index+1);
            
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        if(digits.length()==0)
        {
            return {};
        }
        digit=digits;
        helper("",0);
        return ans;
    }
};
