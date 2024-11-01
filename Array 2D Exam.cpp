#include <bits/stdc++.h>

using namespace std;
//in so nguyen to tung dong
/*int nt(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)return 0;
	}
	return n>1;
}
int main()
{
	int n,m;cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(nt(a[i][j]))
			{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}*/

//tong hang tong cot tren ma tran
/*int main()
{
	int n,m;cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		int sumhang=0;
		for(int j=0; j<m; j++)
		{
			sumhang+=a[i][j];
		}
		cout<<sumhang<<" ";
	}
	cout<<endl;
	for(int i=0; i<m; i++)
	{
		int sumcot=0;
		for(int j=0; j<n; j++)
		{
			sumcot+=a[j][i];
		}
		cout<<sumcot<<" ";
	}
	return 0;
}*/
//in ra so nho nhat va lon nhat trong ma tran va vi tri cua chung
/*int main()
{
	int n,m;cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	int maxval=INT_MIN;
	int minval=INT_MAX;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			maxval=max(a[i][j],maxval);
			minval=min(a[i][j],minval);
		}
	}
	cout<<minval<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]==minval)
			{
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
	}
	cout<<maxval<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]==maxval)
			{
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
	}
	return 0;
}*/
//in cac so thuan nghich trong tam giac duoi
/*int tn(int n)
{
	int rev=0;
	int tmp=n;
	while(n)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	return rev==tmp;
}

int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	int ans=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(tn(a[i][j]))
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}*/

//in theo mau
/*int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Pattern 1:"<<endl;
	for(int j=0; i<n; i++)
	{
		for(int i=0; j<n; j++)
		{
			cin>>a[j][i]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"Pattern 2:"<<endl;
	for(int i=n; i>=0; i--)
	{
		for(int j=n; j>=0; j--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Pattern 3:"<<endl;
	for(int j=n; j>=0; j--)
	{
		for(int i=n; i>=0; i--)
		{
			cout<<a[j][i];
		}
	}
	cout<<"Pattern 4:"<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=n; j>=0; j--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/

//hoan doi 2 duong cheo
/*int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	int x=0,y=n-1;
	int tmp=0;
	while(x<n && y>=0)
	{
		tmp=a[x][x];
		a[x][y]=tmp;
		a[x][x]=a[x][y];
		++x;--y;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/

//hoan vi tren 2 hang cua ma tran
/*int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	int u,v;
	cin>>u>>v;
	--u;--v;
	int tmp=0;
	for(int i=0; i<n; i++)
	{
		tmp=a[u][i];
		a[u][i]=a[v][i];
		a[v][i]=tmp;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/
//hoan vi tren cot cua ma tran
/*int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	int u,v;
	cin>>u>>v;
	int tmp=0;
	for(int i=0; i<n; i++)
	{
		tmp=a[i][u];
		a[i][u]=a[i][v];
		a[i][v]=tmp;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/
//so nguyen to tren duong cheo chinh va duong cheo phu (1)
/*int prime(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)return 0;
	}
	return n>1;
}

int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	set<int>se;
	set<int>sex;
	for(int i=0; i<n; i++)
	{
		if(prime(a[i][i]))
		{
			se.insert(a[i][i]);
		}
	}
	
	cout<<se.size()<<endl;
	return 0;
}*/
//dem so luong so nguyen to tren 2 duong cheo (2)
/*int prime(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)return 0;
	}
	return n>1;
}
int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	set<int>se;
	for(int i=0; i<n; i++)
	{
		if(prime(a[i][i]))
		{
			se.insert(a[i][i])
		}
	}
	int i=0,j=n-1;
	while(i<n && j>=0)
	{
		if(prime(a[i][j]))
		{
			se.insert(a[i][j]);
		}
		++i;--j;
	}
	cout<<se.size()<<endl;
	return 0;
}*/
//sap xep ma tran theo tung hang tang dan
int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
		sort(a,a+n);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}