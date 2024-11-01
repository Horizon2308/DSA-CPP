#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	string res="";
	string token;
	while(ss >> token)
	{
		res+=toupper(token[0]);
		for(int i=1; i<token.length(); i++)
		{
			res+=tolower(token[i]);
		}
		res+=" ";
	}
	res.erase(res.length()-1);
	s=res;
	cout<<s<<endl;
	return 0;
}