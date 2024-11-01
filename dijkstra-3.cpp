#include <bits/stdc++.h>
#define maxn 100

using namespace std;

vector<pair<int, int>> adj[1001];


struct Graph {
	int n;
	int A[maxn][maxn];
};

// nhap
void input(Graph &g) {
	ifstream fi("D:\\CTDLVGT\\practice-2.txt");
	if (fi.is_open()) {
		fi >> g.n;
		for (int i = 1; i <= g.n; i++) {
			for (int j = 1; j <= g.n; j++) {
				fi >> g.A[i][j];
			}
		}
	}
	fi.close();
}
// xuat
void output(Graph g) {
	cout << "\nSo dinh: " << g.n << endl;
	for (int i = 1; i <= g.n; i++) {
		for (int j = 1; j <= g.n; j++) {
			cout << g.A[i][j] << " ";
		}
		cout << endl;
	}
}

// chuyen tu man tran sang danh sach ke
void transfer(Graph g) {
	for (int i = 1; i <= g.n; i++) {
		for (int j = 1; j <= g.n; j++) {
			if (g.A[i][j] != 0) {
				adj[i].push_back({j, g.A[i][j]});
				adj[j].push_back({i, g.A[i][j]});
			}
		}
	}
}

const int INF = 1e9;
int parent[maxn]; // danh dau duong di

void dijkstra(int s, int t, Graph g){ // diem bat dau, diem ket thuc, graph
	vector<int> d(g.n + 1, INF); //khai bao duong di den tat ca cac diem la vo cung -> danh dau xem no da duoc di hay chua
	d[s] = 0; // cho duong di toi chinh no bang 0
	parent[s] = s; // danh dau duong di
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q; // khai bao hang doi uu tien, no se luu cap {dinh, khoang cach} va luon luon dua ra dinh co trong so nho nhat
	Q.push({s, 0}); // day dinh dau tien vao hang doi
	while (!Q.empty()) {
		pair<int, int> top = Q.top();
		Q.pop();
		int u = top.first;
		int length = top.second;
		if (length > d[u]) continue; // xem dinh da duoc xet hay chua
		for (auto it : adj[u]) {
			int v = it.first;
			int w = it.second;
			if (d[v] > d[u] + w) {
				d[v] = d[u] + w;
				Q.push({v, d[v]});
				parent[v] = u;
			}
		}
	}
	cout << "\nKhoang cach ngan nhat giua " << s << " va " << t << " la: " << d[t] << endl;
	vector<int> path; // luu duong di
	while (1) {
		path.push_back(t);
		if (t == s) {
			break;
		}
		t = parent[t];
	}
	reverse(path.begin(), path.end());
	for (int i = 0; i < path.size(); i++) {
		cout << path[i];
		if (i < path.size() - 1) {
			cout << " --> ";
		}
	}
}



int main() {
	Graph g;
	input(g);
	output(g);
	transfer(g);
	int s, t;
	cout << "\nNhap vao dinh bat dau: ";
	cin >> s;
	cout << "\nNhap dinh ket thuc: ";
	cin >> t;
	dijkstra(s, t, g);
	return 0;
}