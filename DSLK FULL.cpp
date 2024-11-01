#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	node *next;
};

typedef node node;

node *makeNode(int x)
{
	node *newNode= new node;
	newNode->data=x;
	newNode->next=NULL;
	return newNode;
}

void duyet(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

int size(node *head)
{
	int cnt=0;
	while(head!=NULL)
	{
		++cnt;
		head=head->next;
	}
	return cnt;
}

void pushFront(node *&head,int x)
{
	node *newNode=makeNode(x);
	newNode->next=head;
	head=newNode;
}

void pushBack(node *&head,int x)
{
	node *temp=head;
	node *newNode=makeNode(x);
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

void insert(node *&head, int x, int k)
{
	int n=size(head);
	if(k==1)
	{
		pushFront(head,x);
		return;
	}
	if(k<1 || k> n+1)
	{
		return;
	}
	node *temp=head;
	node *newNode=makeNode(x);
	for(int i=1; i<=k-2; i++)
	{
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
}

void popFront(node *&head)
{
	if(head==NULL)
	{
		return;
	}
	node *temp=head;
	head=head->next;
	delete temp;
}

void popBack(node *head)
{
	int n=size(head);
	while(head==NULL)
	{
		return;
	}
	node *temp=head;
	for(int i=1; i<n-1; i++)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	temp=temp->next;
	delete temp;
}

int main()
{
	node *head=NULL;
	while(1)
	{
		cout<<"\n---------------------------\n";
	    cout<<"1. Them vao dau ";
	    cout<<"\n2. Them vao cuoi ";
	    cout<<"\n3. Chen vao giua ";
	    cout<<"\n4. Xoa o dau DSLK ";
	    cout<<"\n5. Xoa o cuoi DSLK ";
	    cout<<"\n6. Duyet ";
	    cout<<"\n7. In ra kich thuoc ";
	    cout<<"\n0. Thoat";
	    cout<<"\n---------------------------\n";
	    cout<<"Nhap lua chon :";
	    int chc;cin>>chc;
	    if(chc==1)
     	{
		   cout<<"\nNhap vao x :";
		   int x;cin>>x;
		   pushFront(head,x);
	    }
	    else if(chc==2)
	    {
		   cout<<"\nNhap vao x :";
		   int x;cin>>x;
		   pushBack(head,x);
	    }
	    else if(chc==3)
	    {
	    	cout<<"\nNhap vao x :";
		    int x;cin>>x;
		    cout<<"\nNhap vao k :";
		    int k;cin>>k;
		    insert(head,x,k);
		}
		else if(chc==4)
		{
			popFront(head);
		}
		else if(chc==5)
		{
			popBack(head);
		}
		else if(chc==6)
		{
			duyet(head);
			cout<<endl;
		}
		else if(chc==7)
		{
			cout<<size(head);
		}
		else
		{
			break;
		}
    }
    return 0;
}