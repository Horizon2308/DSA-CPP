#include <bits/stdc++.h>

//viet chuong trinh cay nhi phan luu cac ki tu, duyet truoc giua sau va in ra man hinh

//dinh nghia sinh vien gom ma sinh vien ho ten nam sinh

//lay truong ma sinh vien lam khoa duyet cay theo thu tu truoc giua sau va hien thi ket qua ra man hinh

using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};

typedef Node *Tree;

void Create(Tree &root){
	root = NULL;
}

Node* makeNode(int x){
	Node *p = new Node;
	if(p != NULL){
		p->data = x;
		p->left = p->right = NULL;
	}
	return p;
}

void insertNode(Tree &root, Node *p){
	if(root != NULL){
		if(p->data == root->data){
			return;
		}
		if(p->data > root->data){
			insertNode(root->right, p);
		}
		else{
			insertNode(root->left, p);
		}
	}
	else{
		root = p;
	}
}

void duyetTruoc(Tree root){
	
}

int main(){
	
}