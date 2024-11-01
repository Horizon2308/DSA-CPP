#include <bits/stdc++.h>

using namespace std;
//sap xep day so
/*int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m;cin>>n>>m;
		int a[n];
		vector<int>v;
		int idx=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		int maxval=INT_MIN;
		for(int i=0; i<n; i++)
		{
			maxval=max(a[i],maxval);
		}
		for(int x : a)
		{
			v.push_back(x);
		}
		for(int i=0; i<v.size(); i++)
		{
			if(v[i]==maxval)
			{
				idx=i;
				break;
			}
		}
		v.insert(v.begin()+idx,m);
		stable_sort(v.begin(),v.end());
		for(auto x : v)
		{
			cout<<x<<" ";
		}
	}
	return 0;
}*/
//thu phi xe o to
/*int price(string s, int c)
{
	if(s=="Xe_con")
	{
		if(c==5)return 10000;
		else return 15000;
	}
	else if(s=="Xe_tai")
	{
		return 20000;
	}
	else
	{
		if(c==29)return 50000;
		else return 70000;
	}
}
int main()
{
	int n;cin>>n;
	string bien,loaixe,huong,ngay;
	int soghe;
	vector<string>v;
	map<string,int>mp;
	while(n--)
	{
	    cin>>bien>>loaixe>>soghe>>huong>>ngay;
	    if(find(v.begin(),v.end(),ngay)==v.end())
	    {
	    	v.push_back(ngay);
		}
		if(huong=="IN")
		{
			mp[ngay]+=price(loaixe,soghe);
		}
	}
	for(auto x : v)
	{
		cout<<x<<":"<<mp[x]<<endl;
	}
	return 0;
}*/
//xac dinh the loai tho
/*int main()
{
	int n;cin>>n;
	cin.ignore();
	string a[n];
	for(int i=0; i<n; i++)
	{
		getline(cin,a[i]);
	}
	int i=0;
	while(i<n)
	{
	    
	}*/
using ll=long long;
//tinh thu nhap giao vien
/*ll solve(int cb, int hsb, string s)
{
	if(s=="HT")
	{
		return 1ll*cb*hsb+2000000;
	}
	else if(s=="HP")
	{
		return 1ll*cb*hsb+900000;
	}
	else return 1ll*cb*hsb+500000;
}

int main()
{
	string id,hoten;
	int luongcb;
	getline(cin,id);
	getline(cin,hoten);
	cin>>luongcb;
	string res1,res2;
	for(int i=0; i<id.size(); i++)
	{
		if(isalpha(id[i]))
		{
			res1+=id[i];
		}
		else res2+=id[i];
	}
	int hsb=stoi(res2);
	ll sum=solve(luongcb,hsb,res1);
	if(res1=="HT")
	{
		cout<<id<<" "<<hoten<<" "<<hsb<<" "<<"2000000"<<" "<<sum<<endl;
	}
	else if(res1=="HP")
	{
		cout<<id<<" "<<hoten<<" "<<hsb<<" "<<"900000"<<" "<<sum<<endl;
	}
	else
	{
		cout<<id<<" "<<hoten<<" "<<hsb<<" "<<"500000"<<" "<<sum<<endl;
	}
	return 0;
}*/
//thu gon day so
/*int main()
{
	int n;cin>>n;
	int a[n];
	vector<int>v;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		v.push_back(a[i]);
	}
	int i=0;
	int res=0;
	
	cout<<v.size()<<endl;
}*/
//tuyen sinh
/*float solve(float toan, float ly, float hoa)
{
	return (toan*2)+ly+hoa;
}
int main()
{
	string id,hoten;
	float toan,ly,hoa;
	cin>>id;
	cin.ignore();
	getline(cin,hoten);
	cin>>toan>>ly>>hoa;
	float sum=0;
	string res;
	for(int i=0; i<id.size()-4; i++)
	{
		res+=id[i];
	}
	sum=solve(toan,ly,hoa);
	float uutien=0;
	if(res=="KV1")uutien=0.5;
	else if(res=="KV2")uutien=1;
	else uutien=2;
	if(sum >= 24)
	{
		cout<<id<<" "<<hoten<<" "<<uutien<<" "<<sum<<" TRUNG TUYEN"<<endl;
	}
	else
	{
		cout<<id<<" "<<hoten<<" "<<uutien<<" "<<sum<<" TRUOT"<<endl;
	}
	return 0;
}*/