#include <bits/stdc++.h>


// operator overloading
// << >>
//cin : istream
//cout :ostream
using namespace std;

class Sinhvien
{
	private :
		string id, hoten, ns;
		double gpa;
		static int dem;
	public :
		void nhap();
		void xuat();
		int updem();
		friend void chuanHoa(Sinhvien&);
		friend istream& operator >> (istream &in, Sinhvien &a);
		friend ostream& operator << (ostream &out, Sinhvien a);
		//bool operator < (Sinhvien a);
		friend bool operator  < (Sinhvien a, Sinhvien b);
};

/*bool Sinhvien :: operator < (Sinhvien a)
{
	return this->gpa < a.gpa;
}*/

bool operator < (Sinhvien a, Sinhvien b)
{
	return a.gpa < b.gpa;
}
istream& operator >> (istream&in, Sinhvien &a)
{
	cout<<"Nhap vao id :";in>>a.id;
	in.ignore();
	cout<<"\nNhap vao ho ten :";getline(in,a.hoten);
	cout<<"\nNhap vao ngay sinh :";in>>a.ns;
	cout<<"\nNhap vao gpa :";in>>a.gpa;
}

ostream& operator << (ostream &out, Sinhvien a)
{
	cout<<a.id<<" "<<a.hoten<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<" ";
}
void chuanHoa(Sinhvien& a)
{
	stringstream ss(a.hoten);
	string res="";
	string token;
	while(ss >> token)
	{
		res+=toupper(token[0]);
		for(int i=1; i<token.length(); i++)
		{
			res+=tolower(token[i]);
		}
		res+=" ";
	}
	res.erase(res.length()-1);
	a.hoten=res;
}
int Sinhvien ::dem=0;

int Sinhvien :: updem()
{
	++dem;
	return dem;
}
/*void Sinhvien :: nhap()
{
	
	//cout<<"Nhap vao id :";cin>>id;
	//cin.ignore();
	++dem;
	id="Sv"+string(3-to_string(dem).length(),'0')+to_string(dem);
	cout<<"\nNhap vao ho ten :";getline(cin,hoten);
	cout<<"\nNhap vao ngay sinh :";cin>>ns;
	cout<<"\nNhap vao gpa :";cin>>gpa;
}

void Sinhvien :: xuat()
{
	cout<<id<<" "<<hoten<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa<<endl;
}
*/
int main()
{
	Sinhvien a,b;
	cin>>a>>b;
	if(a<b)
	{
		cout<<"YES !";
	}
	else cout<<"NO !";
	return 0;
}