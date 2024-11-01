#include <bits/stdc++.h>

using namespace std;

//bai 1
/*struct Khachhang
{
	int id;
	string name,address,phonenumber;
	double pay;
};

typedef struct Khachhang Kh;

struct node
{
	Kh a;
	node *pev;
	node *next;
};

node *makeNode()
{
	Kh s;
	cout<<"\nNhap vao ma khach hang : ";cin>>s.id;
	cin.ignore();
	cout<<"\nNhap vao ten khach hang : ";getline(cin,s.name);
	cout<<"\nNhap vao dia chi : ";getline(cin,s.address);
	cout<<"\nNhap vao so dien thoai : ";cin>>s.phonenumber;
	cout<<"\nNhap vao so tien thanh toan : ";cin>>s.pay;
	node *newNode = new node;
	newNode->a=s;
	newNode->next=NULL;
	newNode->pev=NULL;
	return newNode;
}

void pushBack(node *&head)
{
	node *newNode=makeNode();
	node *temp=head;
	if(head==NULL)
	{
		head=newNode;return;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->pev=temp;
}

void input(Kh a)
{
	cout<<"\nMa khach hang : "<<a.id;
	cout<<"\nTen khach hang : "<<a.name;
	cout<<"\nDia chi : "<<a.address;
	cout<<"\nSo dien thoai : "<<a.phonenumber;
	cout<<"\nTong so tien thanh toan : "<<a.pay;
}

void duyet(node *head)
{
	while(head!=NULL)
	{
		input(head->a);
		head=head->next;
	}
}

void Sort(node *&head)
{
	for(node* i=head; i!=NULL ;i=i->next)
	{
		node* Maxnode=i;
		for(node *j=i->next; j!=NULL; j=j->next)
		{
			if(Maxnode->a.pay < j->a.pay)
			{
				Maxnode=j;
			}
		}
		Kh a= Maxnode->a;
		Maxnode->a=i->a;
		i->a=a;
	}
}

int main()
{
	int n;cin>>n;
	node *head=NULL;
	Kh a[n];
	for(int i=1; i<=n; i++)
	{
		pushBack(head);
	}
	cout<<"\n-------------------------------------\n";
	node *temp=head;
	while(temp!=NULL)
	{
		if(temp->a.address=="Ha Noi")
		{
			input(temp->a);
		}
		temp=temp->next;
	}
	Sort(head);
	cout<<"\n-------------------------------------\n";
	duyet(head);
	return 0;
}*/

//bai 2
/*struct Nhanvien
{
	int id,age;
	string name;
	double salary;
};

typedef struct Nhanvien Nv;

struct node
{
	Nv a;
	node *next;
};

node *makeNode()
{
	Nv s;
	cout<<"\nNhap vao ma nhan vien : ";cin>>s.id;
	cin.ignore();
	cout<<"\nNhap vao ten nhan vien : ";getline(cin,s.name);
	cout<<"\nNhap vao tuoi : ";cin>>s.age;
	cout<<"\nNhap vao he so luong : ";cin>>s.salary;
	node *newNode=new node();
	newNode->a=s;
	newNode->next=NULL;
	return newNode;
}

void pushFront(node *&head)
{
	node *newNode=makeNode();
	newNode->next=head;
	head=newNode;
}

void input(Nv a)
{
	cout<<"\nMa nhan vien la : "<<a.id;
	cout<<"\nTen nhan vien la : "<<a.name;
	cout<<"\nTuoi nhan vien : "<<a.age;
	cout<<"\nHe so luong la : "<<a.salary;
}

void duyet(node *head)
{
	while(head!=NULL)
	{
		input(head->a);
		head=head->next;
	}
}

void Sort(node *&head)
{
	for(node *i=head; i!=NULL; i=i->next)
	{
		node *Maxnode=i;
		for(node *j=i->next; j!=NULL; j=j->next)
		{
			if(Maxnode->a.salary < j->a.salary)
			{
				Maxnode=j;
			}
		}
		Nv temp=Maxnode->a;
		Maxnode->a=i->a;
		i->a=temp;
	}
}


int main()
{
	int n;cin>>n;
	node *head=NULL;
	for(int i=1; i<=n; i++)
	{
		pushFront(head);
	}
	cout<<"\n----------------------------------\n";
	node *temp=head;
	while(temp!=NULL)
	{
		if(temp->a.age > 60)
		{
			input(temp->a);
		}
		temp=temp->next;
	}
	Sort(head);
	cout<<"\n---------------------------\n";
	duyet(head);
	return 0;
}*/

//bai 3
struct date
{
	int ngay,thang,nam;
};

struct CongNhan
{
	string id,ten,quequan;
	date ngay_sinh;
	double luong;
};

typedef struct CongNhan cn;

struct node
{
	cn a;
	node *next;
};

node* makeNode()
{
	cn s;
	cout<<"\nNhap vao ma cong nhan : ";cin>>s.id;
	cin.ignore();
	cout<<"\nNhap vao ten cong nhan : ";getline(cin,s.ten);
	cout<<"\nNhap vao ngay thang nam sinh : ";cin>>s.ngay_sinh.ngay>>s.ngay_sinh.thang>>s.ngay_sinh.nam;
	cin.ignore();
	cout<<"\nNhap vao que quan : ";getline(cin,s.quequan);
	cout<<"\nNhap vao luong : ";cin>>s.luong;
	node *newNode=new node();
	newNode->a=s;
	newNode->next=NULL;
	return newNode;
}

void pushBack(node *&head)
{
	node *newNode=makeNode();
	node *temp=head;
	if(head==NULL)
	{
		head=newNode;return;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode;
}


bool solve(string a,string b)
{
	stringstream ss(a);
	string token;
	vector<string>v,v1;
	while(ss>>token)
	{
		v.push_back(token);
	}
	stringstream st(b);
	string word;
	while(st>>word)
	{
		v1.push_back(word);
	}
	if(v[v.size()-1] < v1[v1.size()-1])return true;
	else return false;
}

void Sort(node *&head)
{
	for(node *i=head; i!=NULL; i=i->next)
	{
		node *Minnode=i;
		for(node *j=i->next; j!=NULL; j=j->next)
		{
			if(solve(j->a.ten,Minnode->a.ten))
			{
				Minnode=j;
			}
		}
		cn temp=Minnode->a;
		Minnode->a=i->a;
		i->a=temp;
	}
}


void input(cn s)
{
	cout<<"\nMa cong nhan : "<<s.id;
	cout<<"\nTen cong nhan : "<<s.ten;
	cout<<"\nNgay thang nam sinh : "<<s.ngay_sinh.ngay<<" "<<s.ngay_sinh.thang<<" "<<s.ngay_sinh.nam;
	cout<<"\nQue quan : "<<s.quequan;
	cout<<"\nLuong : "<<s.luong;
}

void duyet(node *head)
{
	while(head!=NULL)
	{
		input(head->a);
		head=head->next;
	}
}

int main()
{
	int n;cin>>n;
	node *head=NULL;
	for(int i=1; i<=n; i++)
	{
		pushBack(head);
	}
	Sort(head);
	duyet(head);
	return 0;
}