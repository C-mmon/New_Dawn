he function accepts INTEGER_ARRAY B as parameter.
 */

string fairRations(vector<int> v) 
{
        auto cnt = 0;
    for (auto i=0; i<v.size()-1; ++i)
    {
        if (isodd(v[i]))
        {
            v[i]++; // useless, just for clarity
            v[i+1]++;
            cnt+=2;
        }
    }
    return (isodd(v.back()) ? "NO" : to_string(cnt));
    
