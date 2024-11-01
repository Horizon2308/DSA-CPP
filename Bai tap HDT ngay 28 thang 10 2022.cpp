#include <bits/stdc++.h>

using namespace std;
class Class
{
	private:
		string malop,tenlop;
	public:
		Class();
		void nhap();
		void xuat();
};

Class :: Class()
{
	malop=" ";
	tenlop=" ";
}
void Class :: nhap()
{
	cout<<"\nNhap vao ma lop :";cin>>malop;
	cout<<"\nNhap vao ten lop :";cin>>tenlop;
}

void Class :: xuat()
{
	cout<<"\nMa lop la : "<<malop;
	cout<<"\nTen lop la : "<<tenlop;
}

class Giangday : public Class
{
	private:
		string magv,mamh;
	    int sotc;
	    int Stcl;
	    static int taught;
	public:
		Giangday();
		void nhap();
		void xuat();
		int SumofLast(Giangday &a);
		int getSotc()
		{
			return sotc;
		}
		friend bool operator < (Giangday a, Giangday b);
		int getStcl()
		{
			return Stcl;
		}
};

int Giangday :: taught = 15;

Giangday :: Giangday()
{
	magv=" ";
	mamh=" ";
	sotc=0;
}

void Giangday :: nhap()
{
	cout<<"\nNhap vao ma giang vien :";cin>>magv;
	cout<<"\nNhap vao ma mon hoc : ";cin>>mamh;
	Class :: nhap();
	cout<<"\nNhap vao so tin chi :";cin>>sotc;
}

void Giangday :: xuat()
{
	cout<<"\nMa giang vien la : "<<magv;
	cout<<"\nMa mon hoc : "<<mamh;
	Class :: xuat();
	cout<<"\nSo tin chi : "<<sotc;
}

int Giangday :: SumofLast(Giangday &a)
{
	a.Stcl= a.sotc*15 - a.taught;
	return a.Stcl;
}
bool operator < (Giangday a, Giangday b)
{
	return a.SumofLast(a) < b.SumofLast(b);
}
int main()
{
	int n;cin>>n;
	Giangday a[n];
	for(int i=0; i<n; i++)
	{
		a[i].nhap();
	}
	for(int i=0; i<n; i++)
	{
		a[i].xuat();
	}
	cout<<"\n------------------------------\n";
	for(int i=0; i<n; i++)
	{
		if(a[i].getSotc()==3)
		{
			a[i].xuat();
		}
	}
	sort(a,a+n);
	cout<<"\n------------------------------\n";
	a[0].xuat();
	cout<<"\nSo tiet con lai : ";
	cout<<a[0].SumofLast(a[0]);
	return 0;
}