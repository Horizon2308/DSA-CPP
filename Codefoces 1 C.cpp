#include <bits/stdc++.h>

using namespace std;

int mark[100000]={0};

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int res=0;
		int sum=0;
		int a,b;cin>>a>>b;
		for(int i=0; i<100000; i++)
		{
			if(i==0)
			{
				mark[i]=1;
				res+=1;
			}
			else if((i>=a && mark[i-a]==1) || (i>=b && mark[i-b]==1))
			{
				mark[i]=1;
				res+=1;
			}
			else
			{
				sum+=1;
			}
		}
		cout<<res<<" "<<sum<<endl;
		if(res>sum)cout<<"Finite"<<endl;
		else cout<<"Infinite"<<endl;
	}
	return 0;
}