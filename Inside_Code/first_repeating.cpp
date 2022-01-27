#include <bits/stdc++.h>
using namespace std;
char firstrepeating(string str)
{
  unordered_set <char> h;
  for(int i=0;i<int(str.length());i++)
  {
    char ch=str[i];
    if(h.find(ch)!=h.end())
    {
      return ch;
    }
    else
    {
      h.insert(ch);
    }
  }
  return '\0';
}
int main()
{
  string str="aniketnohara";
  cout<<firstrepeating(str)<<endl;
  return 0;
}
const PI;
console.log(PI); // Ouput: SyntaxError: Missing initializer in const declaration
PI=3.142;
