#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int prefix[10001];
	for(int i=0; i<n; i++)
	{
		if(i==0)prefix[0]=a[0];
		else prefix[i]=prefix[i-1]+a[i];
	}
	for(int i=0; i<n; i++)
	{
		cout<<prefix[i]<<" "; 
	}
	return 0;
}