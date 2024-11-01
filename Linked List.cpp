#include <bits/stdc++.h>

using namespace std;
struct node
{
	int data;
	struct node *next;
};

node* makeNode(int x)
{
	node *newNode=new node();
	newNode->data=x;
	newNode->next=NULL;
	return newNode;
}

void duyet(node *head)
{
	while(head!=NULL)
	{
		cout<<x<<" ";
		head=head->next;
	}
}
void pushBack(node *&head,int x)
{
	node *newNode=makeNode(x);
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

void Sort(node *&head)
{
	for(node i=head; i!=NULL; i=i->next)
	{
		node *Min=i;
		for(node *j=i->next; j!=NULL; j=j->next)
		{
			if(j->data < Min->data)
			{
				Min=j;
			}
		}
		int temp=Min->data;
		j->data=i->data;
		i->data=temp;
	}
}

int main()
{
	
}