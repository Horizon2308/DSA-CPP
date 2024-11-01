#include <bits/stdc++.h>

using namespace std;

class Vemaybay;
class Person;
class Hanhkhach;

class Vemaybay
{
	private:
		string tenchuyen,ngaybay;
	    float giave;
	public:
		void v_nhap();
		void v_xuat();
		float getGiave();
};



void Vemaybay :: v_nhap()
{
	cin.ignore();
	cout<<"\nNhap vao ten chuyen :";getline(cin,tenchuyen);
	cout<<"\nNhap vao ngay bay :";getline(cin,ngaybay);
	cout<<"\nNhap vao gia ve :";cin>>giave;
	cin.ignore();
}

void Vemaybay :: v_xuat()
{
	cout<<"\nTen chuyen la : "<<tenchuyen;
	cout<<"\nNgay bay la :"<<ngaybay;
	cout<<"Gia ve la : "<<giave;
}

float Vemaybay :: getGiave()
{
	return giave;
}


class Person
{
	private:
		string hoten,gioitinh;
	    int tuoi;
	public:
		void nhap();
		void xuat();
};

void Person :: nhap()
{
//	cin.ignore();
	cout<<"\nNhap vao ho ten :";getline(cin,hoten);
	cout<<"\nNhap vao gioi tinh :";cin>>gioitinh;
	cout<<"\nNhap vao tuoi :";cin>>tuoi;
}

void Person :: xuat()
{
	cout<<"\nHo ten : "<<hoten;
	cout<<"\nGioi tinh :"<<gioitinh;
	cout<<"\nTuoi :"<<tuoi;
}

class Hanhkhach : public Person
{
	private:
		int soluong;
	    Vemaybay ve[100];
	    float tongtien;
	public:
		void nhap();
		void xuat();
		bool operator < (Hanhkhach another);
};

void Hanhkhach :: nhap()
{
	Person :: nhap();
	cout<<"\nNhap vao so luong ve :";
	cin>>soluong;
	cin.ignore();
	ve[soluong];
	for(int i=0; i<soluong; i++)
	{
		ve[i].v_nhap();
		tongtien += ve[i].getGiave();
	}
}

void Hanhkhach :: xuat ()
{
	Person :: xuat();
	cout<<"\nSo luong ve : "<<soluong;
	cout<<"\nVe ma hanh khach da mua :";
	for(int i=0; i<soluong; i++)
	{
		ve[i].v_xuat();
	}
	cout<<"\nTong tien = "<<tongtien;
}

bool Hanhkhach :: operator < (Hanhkhach another)
{
	return this->tongtien < another.tongtien;
}


int main()
{
	int n;cin>>n;
	Hanhkhach a[n];
	cin.ignore();
	for(int i=0; i<n; i++)
	{
		a[i].nhap();
	}
	for(int i=0; i<n; i++)
	{
		a[i].xuat();
	}
	sort(a,a+n);
	cout<<"Danh sach hanh khach sau khi sap xep la :";
	for(int i=0; i<n; i++)
	{
		a[i].xuat();
	}
	return 0;
}