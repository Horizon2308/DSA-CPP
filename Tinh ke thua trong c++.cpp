#include <bits/stdc++.h>
//base class : class cha
//derived class : class con
using namespace std;

 class Person
 {
 	private:
 		string name,address;
 	public:
 		Person(string name, string address)
 		{
 			this->name=name;
 			this->address=address;
		}
 		string getName()
 		{
 			return name;
		}
		string getAddress()
		{
			return address;
		}
 		void setName(string name)
 		{
 			this->name=name;
		}
		void setAddress(string address)
		{
			this->address=address;
		}
		void in()
		{
			cout<<name<<" "<<address;
		}
		/*void nhap()
		{
			cout<<"Nhap vao ten :";getline(cin,name);
			cout<<"\nNhap vao dia chi :";getline(cin,address);
		}*/
 };
 
 class Student : public Person
 {
 	private :
 		float gpa;
 	public:
 		Student(string name,string address,float gpa): Person(name,address)
 		{
 			this->gpa=gpa;
		}
 		float getGpa()
 		{
 			return gpa;
		}
		void setGpa(float gpa)
		{
			this->gpa=gpa;
		}
		/*void nhap()
		{
			Person :: nhap();
			cout<<"\nNhap vao gpa :";
			cin>>gpa;
		}*/
		void in()
		{
			Person :: in();
		    cout<<fixed<<setprecision(2)<<" "<<gpa<<endl;
		}
 };
 
 int main()
 {
 	Student a("Ha Duc Hung","Ninh Binh",4.0);
 	/*a.setName("Ha Duc Hung");
 	a.setAddress("Ninh Binh");
 	a.setGpa(4.0);*/
 	//a.nhap();
 	//cout<<a.getName()<<" "<<a.getAddress()<<" "<<fixed<<setprecision(2)<<a.getGpa()<<endl;
    a.in();
 	return 0;
 }