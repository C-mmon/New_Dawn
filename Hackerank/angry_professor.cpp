 *  2. INTEGER_ARRAY a
 */

string angryProfessor(int k, vector<int> a) 
{
    int present=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<=0)
        {
            present++;
            if(present == k)
            {
                return "NO";
            }
        }
    }
    return "YES";
    
}

