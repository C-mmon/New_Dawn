class Solution {
public:
    int monotoneIncreasingDigits(int n) 
    {
        string a=to_string(n); //convert to the string
        
        int len=a.size();
        int store=len; 
        //if the length of the store remains unchanged that means no digits
        //must be converted to 9
        
        //basic checking from the last digit and >0 because i-1 at 0 will be -1 out of bound
        for(int i=len-1;i>0;i--)
        {
            //checking the reverse of the conditon given
            if(a[i]<a[i-1])
            {
                store=i; //store the index of the element which does not satisfy the condition and decrement the value of the element from the right that is i-1
                
                //reason to store is to perform reverse operation
                a[i-1]=a[i-1]-1; 
            }
                
        }
        
        
        for(int i=store;i<len;i++)
        {
            a[i]='9';
        }
        
        //returning back in the integer form
        return stoi(a);
        
        
    }
};
