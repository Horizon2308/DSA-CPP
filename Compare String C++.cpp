#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string a[n];
	for(int i=0; i<n; i++)
	{
		getline(cin,a[i]);
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i][0]<<" ";
	}
	return 0;
}