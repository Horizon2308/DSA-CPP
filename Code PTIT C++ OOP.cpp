#include <bits/stdc++.h>

using namespace std;


//xu ly gian lan
/*class Sinhvien
{
	private:
		string id,name;
	public:
		void nhap();
		void xuat();
		string getId()
		{
			return id;
		}
};

void Sinhvien :: nhap()
{
	cin>>id;
	cin.ignore();
	getline(cin,name);
}

void Sinhvien :: xuat()
{
	cout<<id<<" "<<name<<" ";
}

class Access
{
	private:
		string date,time,masv,webaccess;
	public:
		void input();
		void output();
		string getWebaccess();
		string getMasv()
		{
			return masv;
		}
};

void Access :: input()
{
	cin>>date>>time>>masv>>webaccess;
}

string Access :: getWebaccess()
{
	return this->webaccess;
}

int main()
{
	map<string,string>mp;
	map<string,string>pm;
	int n;cin>>n;
	Sinhvien a[n];
	for(int i=0; i<n; i++)
	{
		a[i].nhap();
		//mp[a[i].getId()]="OK";
	}
	int m;cin>>m;
	Access b[m];
	for(int i=0; i<m; i++)
	{
		b[i].input();
		pm[b[i].getMasv()]="OK";
	}
	for(int i=0; i<m; i++)
	{
		if(b[i].getWebaccess()!="code.ptit.edu.vn")
		{
			pm[b[i].getMasv()]="FAIL";
		}
	}
	for(int i=0; i<n; i++)
	{
		if(pm.find(a[i].getId())==pm.end())
		{
			pm[a[i].getId()]="FAIL";
		}
	}
	for(int i=0; i<n; i++)
	{
		a[i].xuat();
		cout<<pm[a[i].getId()]<<endl;
	}
	return 0;
}*/

//quan ly kho hang
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		
	}
}