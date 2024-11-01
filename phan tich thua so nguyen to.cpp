#include <bits/stdc++.h>

using namespace std;

int prime[10000001];

void sieve()
{
	for(int i=0; i<=10000000; i++)
	{
		prime[i]=i;
	}
	for(int i=2; i<=sqrt(10000000); i++)
	{
		if(prime[i]==i)
		{
			for(int j=i*i; j<=10000000; j+=i)
			{
				if(prime[j]==j)
				{
					prime[j]=i;
				}
			}
		}
	}
}
void pt(int n)
{
	while(n!=1)
	{
		int temp=prime[n];
		while(n%temp==0)
		{
			cout<<temp<<" ";
			n/=temp;
		}
	}
}

int main()
{
	sieve();
	int n;cin>>n;
	pt(n);
	return 0;
}