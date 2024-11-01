#include <bits/stdc++.h>

using namespace std;

/*class Vandongvien
{
	private:
		string hoten,monthidau;
	    int tuoi;
	    float chieucao,cannang;
	public:
		friend istream& operator >> (istream&in, Vandongvien &a);
		friend ostream& operator << (ostream&out, Vandongvien a);
		friend bool operator < (Vandongvien a, Vandongvien b);
};

istream& operator >> (istream&in, Vandongvien &a)
{
	in.ignore();
	cout<<"Nhap vao ho ten :"; getline(in, a.hoten);
	cout<<"\nNhap vao tuoi :";in>>a.tuoi;
    in.ignore();
	cout<<"\nNhap vao mon thi dau :";getline(in,a.monthidau);
	cout<<"\nNhap vao can nang :";in>>a.cannang;
	cout<<"\nNhap vao chieu cao :";in>>a.chieucao;
	return in;
}
ostream& operator << (ostream&out, Vandongvien a)
{
	cout<<a.hoten<<" "<<a.tuoi<<" "<<a.monthidau<<" "<<fixed<<setprecision(2)<<a.cannang<<" "<<fixed<<setprecision(2)<<a.chieucao<<endl;
	return out;
}

bool operator < (Vandongvien a, Vandongvien b)
{
	if(a.chieucao==b.chieucao)
	{
		return a.cannang < b.cannang;
	}
	else
	{
		return a.chieucao < b.chieucao;
	}
}

int main()
{
	int n;cin>>n;
	Vandongvien a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
	}
	sort(a,a+n);
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
	}
	return 0;
}*/
class Hotel
{
	private :
		int sumofnights;
		//double payment;
		//double sumofpay;
	public :
		void nhap();
		void xuat();
		//double getSumofpay();
		int getSumofnights()
		{
			return this->sumofnights;
		}
};

void Hotel :: nhap()
{
	cout<<"\nNhap vao tong so dem : ";cin>>sumofnights;
//	cout<<"\nNhap vao tong phi dich vu : ";cin>>payment;
}

void Hotel :: xuat()
{
	cout<<"\nSo dem cua khach hang : "<<sumofnights;
//	cout<<"\nTong phi dich vu : "<<payment;
}

//double Hotel :: getSumofpay()
//{
//	return this->sumofpay;
//}

class Deluxy : public Hotel
{
	private :
		static double payment1;
		static double feeofservice;
		double sumofdeluxe;
	public :
		double inputpayment1(Deluxy &a)
		{
			cout<<"\nNhap vao phi dich vu : ";cin>>a.payment1;
			return a.payment1;
		}
		double inputfeeofservice(Deluxy &a)
		{
			cout<<"\nNhap vao phi phuc vu : ";cin>>a.feeofservice;
			return a.feeofservice;
		}
		void nhap1()
		{
			Hotel :: nhap();
		}
		double sumofPaymentDeluxe(Deluxy a)
		{
			sumofdeluxe=(a.getSumofnights()*750 + a.payment1)*(a.feeofservice *2);
			return sumofdeluxe;
		}
		void xuat1()
		{
			Hotel :: xuat();
		}
};
double Deluxy :: payment1=0;
double Deluxy :: feeofservice=0;
int main()
{
	int n;cin>>n;
	Deluxy a[n];
	a[0].inputpayment1(a[0]);
	a[0].inputfeeofservice(a[0]);
	for(int i=0; i<n; i++)
	{
		a[i].nhap1();
	}
	for(int i=0; i<n; i++)
	{
		a[i].xuat1();
		cout<<"Tong so tien cua khach hang la : "<<a[i].sumofPaymentDeluxe(a[i]);
	}
	return 0;
}
