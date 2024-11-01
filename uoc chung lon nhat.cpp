#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=b-a;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int idx=0;
	idx=gcd(a,b);
	cout<<idx<<endl;
	return 0;
}