#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node node;

node* makeNode(int x)
{
	node *newNode= new node();
	newNode->data=x;
	newNode->next=NULL;
	return newNode;
}

void duyet(node *head)
{
	while(head != NULL)
	{
		cout<<head->data<<' ';
		head=head->next;
	}
}

int size(node *head)
{
	int count=0;
	while(head != NULL)
	{
		++count;
		head=head->next;
	}
	return count;
}

void pushFront(node *&head,int x)
{
	node *newNode=makeNode(x);
	newNode->next=head;
	head=newNode;
}

void pushBack(node *&head, int x)
{
	node *temp=head;
	node *newNode=makeNode(x);
	if(head==NULL)
	{
		head=newNode;return;
	}
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode;
}

int main()
{
	int n; cin>>n;
	node *head=NULL;
	for(int i=0; i<n; i++)
	{
		//pushFront(head,i);
		pushBack(head,i);
	}
	duyet(head);
	return 0;
}