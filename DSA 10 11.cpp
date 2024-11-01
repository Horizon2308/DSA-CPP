#include <bits/stdc++.h>

using namespace std;

struct KhachHang
{
	int id;
	string name,address,phonenumber;
	double pay;
};

typedef struct KhachHang kh;

struct node
{
	kh a;
	node *next;
	node *prev;
};

node *makeNode()
{
	kh s;
	cout<<"\nNhap vao ma khach hang : ";cin>>s.id;
	cin.ignore();
	cout<<"\nNhap vao ten khach hang : ";getline(cin,s.name);
	cout<<"\nNhap vao dia chi : ";getline(cin,s.address);
	cout<<"\nNhap vao so dien thoai : ";cin>>s.phonenumber;
	cout<<"\nNhap vao tong tien thanh toan :";cin>>s.pay;
	node *newNode=new node();
	newNode->a=s;
	newNode->next=NULL;
	newNode->prev=NULL;
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
	newNode->prev=temp;
}

void input(kh s)
{
	cout<<"\nMa khach hang : "<<s.id;
	cout<<"\nTen khach hang : "<<s.name;
	cout<<"\nDia chi : "<<s.address;
	cout<<"\nSo dien thoai : "<<s.phonenumber;
	cout<<"\nTong tien thanh toan : "<<s.pay;
}

void duyet(node *head)
{
	while(head!=NULL)
	{
		input(head->a);
		head=head->next;
	}
}

/*void Sort(node *&head)
{
	for(node *i=head; i!=NULL; i=i->next)
	{
		node *Maxnode=i;
		for(node *j=i->next; j!=NULL; j=j->next)
		{
			if(j->a.pay > Maxnode->a.pay)
			{
				Maxnode=j;
			}
		}
		kh temp=
	}
}*/


int main()
{
	int n;cin>>n;
	node *head=NULL;
	for(int i=1; i<=n; i++)
	{
		pushBack(head);
	}
	duyet(head);
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
	return 0;
}