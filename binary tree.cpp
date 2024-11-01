#include <bits/stdc++.h>
#define da DuAn

using namespace std;

struct DuAn {
	int id;
	string nameProject;
	double total;
};

struct Node {
	da data;
	Node *left;
	Node *right;	
};

Node* makeNode() {
	da a;
	cout << "Nhap vao ma du an: ";
	cin >> a.id;
	cout << "nNhap vao ten du an: ";
	cin.ignore();
	getline(cin, a.nameProject);
	cout << "\nNhap vao tong kinh phi: ";
	cin >> a.total;
	Node *newNode = new Node();
	newNode->data = a;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void createNode(Node *&root, Node *p) {
	if (root != NULL) {
		if (root->data.total == p->data.total) {
			return;
		} else if (root->data.total > p->data.total) {
			createNode(root->left, p);
		} else {
			createNode(root->right, p);
		}
	} else {
		root = p;
	}
}

void input(da a) {
	cout << "\nMa du an: " << a.id;
	cout << "\nTen du an: " << a.nameProject;
	cout << "\nTong kinh phi: " << a.total;
}


void duyet(Node *root) {
	if (root != NULL) {
		input(root->data);
		duyet(root->left);
		duyet(root->right);
	}
}

void search(Node *root, double total) {
	if (root == NULL) {
		cout << "\nKhong tim thay !";
	}
	if (root->data.total == total) {
		cout << "\nDa tim thay: ";
		input(root->data);
	} else if (root->data.total > total) {
		search(root->left, total);
	} else {
		search(root->right, total);
	}
}


int main() {
	Node *root = NULL;
	
}