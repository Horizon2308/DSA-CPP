#include <bits/stdc++.h>

using namespace std;

/*bool bs(int n,int a[],int x)
{
	int r=n-1,l=0;
	while(l<=r)
	{
		int m=(r+l)/2;
		if(a[m]==x)
		{
			return true;
		}
		else if(a[m]<x)
		{
			l=m+1;
		}
		else
		{
			r=m-1;
		}
	}
	return false;
}

bool binary_search(int a[],int l, int r, int x)
{
	int m=(l+r)/2;
	if(l>r)
	{
		return false;
	}
	if(a[m]==x)
	{
		return true;
	}
	else if(a[m]<x)
	{
		return binary_search(a,m+1,r,x);
	}
	else
	{
		return binary_search(a,l,m-1,x);
	}
}
int main()
{
	int n,x;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin >>a[i];
	}
	cin >>x;
	if(binary_search(a,0,n-1,x))
	{
		cout << "Found !"<<endl;
	}
	else
	{
		cout <<"Not Found !"<<endl;
	}
	return 0;*/
/*int first_bs(int a[],int n,int x)
{
	int l=0,r=n-1;
	int res=-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x)
		{
			res=m;
			r=m-1;
		}
		else if(a[m]<x)
		{
			l=m+1;
		}
		else r=m-1;
	}
	return res;
}

int last_bs(int a[],int n,int x)
{
	int l=0,r=n-1;
	int res=-1;
	while(l<=r)
	{
		int m=(r+l)/2;
		if(a[m]==x)
		{
			res=m;
			l=m+1;
		}
		else if(a[m]<x)
		{
			l=m+1;
		}
		else r=m-1;
	}
	return res;
}*/

/*int biger_bs(int a[],int n,int x)
{
	int l=0,r=n-1;
	int res;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x)
		{
			res=n-1;
			break;
		}
		else if(a[m]>x)
		{
			r=m-1;
		}
		else if(a[m]<x)
		{
			l=m+1;
		}
	}
	return res;
}

int main()
{
	int n;
	cin >>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	cout <<biger_bs(a,n,x)<<endl;
	//cout <<first_bs(a,n,x)<<endl;
	//cout<<last_bs(a,n,x)<<endl;
	return 0;*/
	
//lower_bound (iter1,iter2,key) [iter1,iter2) => tra ve phan tu >=key
//upper_bound (iter1,iter2,key) [iter1,iter2) => tra ve phan tu > key
//Neu khong co phan tu nao thoa man se tra ve vi tri cuoi cung trong mang
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int &i:v)
	{
		cin>>i;
	}
	int x;
	cin>>x;
	auto it=lower_bound(v.begin(),v.end(),x);
	cout<<*it<<endl;
	cout<<it-v.begin()<<endl;
	return 0;
}