#include <bits/stdc++.h>

using namespace std;
struct KhachHang
{
	int MaKH,SoDV;
	string TenKH;
	double TongTien;
};
struct node
{
	KhachHang s;
	struct node *next;
};

node* makeNode()
{
	KhachHang s;
	cout<<"\nNhap vao ma khach hang : ";cin>>s.MaKH;
	cin.ignore();
	cout<<"\nNhap vao ten khach hang : ";getline(cin,s.TenKH);
	cout<<"\nNhap vao so dich vu : ";cin>>s.SoDV;
	cout<<"\nNhap vao tong tien thanh toan : ";cin>>s.TongTien;
	node *newNode=new node();
	newNode->s=s;
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
void in(KhachHang s)
{
	cout<<"\nMa khach hang : "<<s.MaKH;
	cout<<"\nTen khach hang : "<<s.TenKH;
	cout<<"\nSo dich vu : "<<s.SoDV;
	cout<<"\nTong tien : "<<s.TongTien;
}
void duyet(node *head)
{
	while(head!=NULL)
	{
		in(head->s);
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
	cout<<"\n---------------------\n";
	duyet(head);
	return 0;
}