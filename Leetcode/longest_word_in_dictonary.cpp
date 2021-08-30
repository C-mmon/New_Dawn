class Solution {
public:
    bool lcs(string x, string y, int a, int b){
	int i=0, j=0;
	while(i<a && j<b){
		if(x[i]==y[j]) j++;
		i++;
	}
	if(j==b) return true;
	return false;
}

    static bool helper(const string &a, const string &b){
	if(a.length()==b.length())
		return a<b;
	return a.length()>b.length();
}

    string findLongestWord(string s, vector<string>& dictionary) 
    {
        sort(dictionary.begin(),dictionary.end(),helper);
        for(auto ch: dictionary)
        {
            if(lcs(s,ch,s.length(),ch.length()))
            {
                return ch;
            }
        }
        return "";
    }
};
