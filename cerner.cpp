//list of strings
//longest common prefix
//strs =
"dog","racecar","car"


//output="fl"
string  longest_common_prefix(vector<string> store)
{
	if(store.size()==0)
	{
		return "";
	}
	int min_store=INT_MAX;
	string min_1;

	for(auto i: store)
	{
		if(i.size()<min_store)
		{
			min_store=i.size();
			min_1=i;
		}
	}
	
	string temp="";
	string ans="";
	for(auto str: store)
	{
		for(int j=0;j<str.length();j++)
		{

				if(store[k]==min_1[k])
				{
					temp+=store[k];
				}
				else
				{
					break;
				}

		}	
		if(temp.size()<ans.size())
		{
			ans=temp;
		}


	}
	return ans;



}
int main()
{
	vector <
}
