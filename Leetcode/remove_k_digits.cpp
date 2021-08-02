class Solution {
public:
    string removeKdigits(string num, int k) 
    {
              stack<char> ans;
        for (char i : num) {
		
			// pop digits while k is still left to maintain an increasing stack
			// these popped digits are the ones which are removed from answer
            while (k and !ans.empty() and i < ans.top()) 
            {
                ans.pop();
                k--;
            }
			
			// don't push if it is a leading 0
            if(ans.empty() && i=='0')
            {
                
            }
            else
            {
                ans.push(i);
            }
        }
		
		// pop from end if some k is left
		// practically: pop the largest digits
        while (k-- and !ans.empty()) ans.pop();        
        
		// nothing left
		if (ans.empty()) return "0";
        
		// get the number from the digits in the stack (in reverse order)
		// I have reused num to simply avoid an extra variable
        string res="";
        
        const int n = ans.size();
        while(!ans.empty()) {
            //num[ans.size()-1] = ans.top();
            //ans.pop();
            res+=ans.top();
            ans.pop();
        }
		
        reverse(res.begin(),res.end());
		// return the substring updated in the previous step
        return res;
    }
};
