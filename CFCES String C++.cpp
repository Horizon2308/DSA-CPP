#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	string res="";
	if(s.size()==1)
	{
		cout<<s<<endl;
		return 0;
	}
	int i,j;
	if(s.size()%2==0)
	{
		i=(s.size()/2)-1;
		j=i+1;
	}
	else
	{
		i=s.size()/2;
		j=i+1;
	}
	while(i>=0)
	{
		res+=s[i];
		res+=s[j];
		--i;
		++j;
	}
	if(s[s.size()-1]==' ')
	{
		res.pop_back();
	}
	cout<<res.size()<<endl;
	cout<<res<<endl;
	return 0;
}