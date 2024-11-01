#include <bits/stdc++.h>

using namespace std;

//sort
//greater() => sap xep theo gia tri giam dan
//Sap xep theo y thich su dung ham cmp
//stable_sort => sap xep ma van giu nguyen thu tu
/*bool cmp(int a,int b)
{
	return a<b;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int &i:a)
	{
		cin>>i;
	}
	stable_sort(a,a+n,cmp);
	for(int i:a)
	{
		cout<<i<<" ";
	}
	return 0;
}*/
bool cmp(string a,string b)
{
	if(a.length() != b.length())
	{
		return a.length() > b.length();
	}
	return a>b;
}
int main()
{
	int n;
	cin>>n;
	string s[n];
	for(int i=0; i<n; i++)
	{
		cin>>s[i];
	}
	stable_sort(s,s+n,cmp);
	for(auto i:s)
	{
		cout<<i<<" ";
	}
	return 0;
}