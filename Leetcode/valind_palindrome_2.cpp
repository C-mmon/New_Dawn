class Solution {
public:
    bool validPal(string s, int left,int right){
        while(left<right){
            if(s[left]!=s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0,right = s.length()-1;
        while(left<right){
            if(s[left]!=s[right])// If the two strings don't match ten we break the loop
                break;
            left++;
            right--;
        }
        if(left<right){
		// left+1 means we consider the substring without the char pointed by the left index 
		// right-1 means we consider the substring without the char pointed by the right index 
            if(validPal(s,left+1,right) || validPal(s,left,right-1))
                return true;
        } else
            return true;
        return false;
    }
};
