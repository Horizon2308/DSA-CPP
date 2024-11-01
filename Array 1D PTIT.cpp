#include <bits/stdc++.h>

using namespace std;
//do chech lech nho nhat
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		int minval=INT_MAX;
		sort(a,a+n);
		for(int i=1; i<n; i++)
		{
			if(max(a[i],a[i-1])-min(a[i],a[i-1]) < minval)
			{
				minval=max(a[i],a[i-1])-min(a[i],a[i-1]);
			}
		}
		cout<<minval<<endl;
    }
	return 0;
}

//khoang cach nho nhat
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		int minval=INT_MAX;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if((max(a[i],a[j])-min(a[i],a[j]) < minval) && i!=j)
				{
					minval=max(a[i],a[j])-min(a[i],a[j]);
				}
			}
		}
		cout<<minval<<endl;
	}
	return 0;
}

//so nho nhat chua xuat hien
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		multiset<int>se;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			se.insert(a[i]);
		}
		int maxval=INT_MIN;
		for(int i=0; i<n; i++)
		{
			maxval=max(a[i],maxval);
		}
		int ans=maxval;
		bool ok=false;
		for(int i=1; i<=maxval; i++)
		{
			if(se.find(i)==se.end())
			{
				cout<<i<<endl;
				ok=true;
			}
		}
		if(ok==false)
		{
			cout<<maxval+1<<endl;
		}
	}
	return 0;
}

//day tam giac
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1])
			{
				cout<<a[i]<<endl;
				break;
			}
		}
	}
	return 0;
}

//so lon nhat trong xau
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		set<int>se;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			se.insert(a[i]);
		}
		cout<<*se.rbegin()<<endl;
	}
	return 0;
}

//vong tron day so 1
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		--k;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i=k+1; i<n; i++)
		{
			cout<<a[i]<<" ";
		}
		for(int i=0; i<=k; i++)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}

//phan tu nho nhat thu k
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		--k;
		sort(a,a+n);
		cout<<a[k]<<endl;
	}
	return 0;
}

//so nho nhat thu k
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[k-1]<<endl;
	}
	return 0;
}

//gia tri da thuc
int main()
{
	int n,x;cin>>n>>x;
	
}