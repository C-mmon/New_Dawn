class Solution {
public:
    bool canMeasureWater(int x, int y, int z) 
    {
        if(x+y<z)
        {
            return false;
        }
        if(x==z || y==z || x+y==z)
        {
            return true;
        }
        return z%__gcd(x,y)==0;
        
    }
};
