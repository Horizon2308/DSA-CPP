#include <bits/stdc++.h>

using namespace std;

int main()
{
	//mang 2 chieu luu char
	/*int n,m;
	cin>>n>>m;
	char a[n][m];
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
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
	//luu mang 2 chieu bang vector
	/*int n;cin>>n;
	int m;
	vector<int>a[n];
	for(int i=0; i<n; i++)
	{
		cin>>m;
		for(int j=0; j<m; j++)
		{
			int x;cin>>x;
			a[i].push_back(x);
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<a[i].size(); j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;*/
	
    //mang cong don 2 chieu
    /*int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1; i<=n; i++)
    {
    	for(int j=1; j<=m; j++)
    	{
    		cin>>a[i][j];
		}
	}
	int t;cin>>t;
	while(t--)
	{
		int h1,h2,c1,c2;
		cin>>h1>>h2>>c1>>c2;
		int sum=0;
		for(int i=h1; i<=h2; i++)
		{
			for(int j=c1; j<=c2; j++)
			{
				sum+=a[i][j];
			}
		}
		cout<<sum<<endl;
	}
	return 0;*/
	
	//mang cong don prefixsum mang 2 chieu
	/*int n,m;cin>>n>>m;
	int a[n+1][m+1];
	int prefix[n+1][m+1]={0};
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
		}
	}
	int h1,h2,c1,c2;
	cin>>h1>>h2>>c1>>c2;
	cout<<(prefix[h2][c2])-prefix[h1-1][c2]-prefix[h2][c1-1]+prefix[h1-1][c1-1]<<endl;*/
	
	//duyet ma tran luoi thay doi toa do
	/*int n,m;cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	int dx[8]={-1,-1,-1,0,0,1,1,1};
	int dy[8]={-1,0,1,-1,1,-1,0,1};
	int res[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			int sum=a[i][j];
			for(int k=0; k<8; k++)
			{
				int imoi=i+dx[k];
				int jmoi=j+dy[k];
				if(imoi>=0 && imoi<n && jmoi>=0 && jmoi<n)
				{
					sum+=a[imoi][jmoi];
				}
			}
			res[i][j]=sum;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;*/
	int n,m;cin>>n>>m;
	int a[n][m];
	int q;cin>>q;
	int b[m][q];
	int c[n][q];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<q; j++)
		{
			cin>>b[i][j];
		}
	}
	int k=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<q; j++)
		{
			c[i][j]=0;
			for(int k=0; k<m; k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	cout<<"\n----------------------------\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<q; j++)
		{
			cout<<c[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}