#include <bits/stdc++.h>

using namespace std;
//tim 2 so co tong bang s voi dieu kien i!=j
/*int main()
{
	int n;
	cin>>n;
	int a[n];
	int s;
	cin>>s;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int i=0,j=n-1;
	int cnt=0;
	while(i!=j)
	{
		if(a[i]+a[j]==s)cnt++;
		if((a[i] + a[j]) < s)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	cout<<cnt<<endl;
	return 0;
}*/

//day con lon nhat co tong nho hon s
int main()
{
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int i=0,j=0;
	int ans=0;
	int cnt=0;
	for(int i=0,j=0; j<n; j++)
	{
		int sum+=a[j];
		while(sum > s)
		{
			sum-=a[i];
			i++;
		}
		j++;
		cnt++;
		ans=max(ans,(r-l+1);
	}
	cout<<ans<<endl;
	return 0;
}