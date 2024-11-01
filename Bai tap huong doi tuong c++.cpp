#include <bits/stdc++.h>

using namespace std;


//bai 1
/*int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}

class Phanso
{
	private:
		int tu,mau;
	public:
		friend istream& operator >> (istream &in, Phanso &a);
		friend ostream& operator << (ostream &out, Phanso a);
		void Rutgon();
};

istream& operator >> (istream &in, Phanso &a)
{
	cout<<"Nhap vao tu so :";in>>a.tu;
	do
	{
		cout<<"\nNhap vao mau so :";in>>a.mau;
	}
	while(a.mau<0);
	return in;
}

ostream& operator << (ostream &out, Phanso a)
{
	out<<"\nPhan so vua nhap :";
	out<<a.tu<<'/'<<a.mau;
	return out;
}

void Phanso :: Rutgon()
{
	int g=gcd(tu,mau);
	tu/=g;
	mau/=g;
}

int main()
{
	Phanso a;
	cin>>a;
	a.Rutgon();
	cout<<a;
	return 0;
}*/

//bai2
int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}

int lcm(int a, int b)
{
	return a/gcd(a,b)*b;
}

class Phanso
{
	private:
		int tu,mau;
	public:
		friend istream& operator >> (istream &in, Phanso &a);
		friend ostream& operator << (ostream &out, Phanso a);
		void Rutgon();
		Phanso operator + (Phanso another);
};

istream& operator >> (istream &in, Phanso &a)
{
	cout<<"Nhap vao tu so :";in>>a.tu;
	do
	{
		cout<<"\nNhap vao mau so :";in>>a.mau;
	}
	while(a.mau<0);
	return in;
}

ostream& operator << (ostream &out, Phanso a)
{
	out<<"\nTong 2 phan so la :";
	out<<a.tu<<'/'<<a.mau;
	return out;
}

Phanso Phanso :: operator + (Phanso another)
{
	Phanso tong;
	if(this->mau == another.mau)
	{
		tong.tu= this->tu + another.tu;
		tong.mau=this->mau;
	}
	else
	{
		tong.tu= this->tu + another.tu;
		tong.mau= (this->tu * (lcm(this->mau,another.mau)/this->tu));
	}
	return tong;
}

void Phanso :: Rutgon()
{
	int g=gcd(tu,mau);
	tu/=g;
	mau/=g;
}

int main()
{
	Phanso a,b;
	cin>>a>>b;
	Phanso tong;
	tong=a+b;
	tong.Rutgon();
	cout<<tong<<endl;
	return 0;
}