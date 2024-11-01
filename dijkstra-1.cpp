#include <bits/stdc++.h>
#define maxn 100
using namespace std;

vector<pair<int, int>> adj[1001];


struct Graph {
	int n;
	int A[maxn][maxn];
};

// nhap
void Input(Graph &g) {
	ifstream fi("D:\\CTDLVGT\\practice-1.txt");
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
void Output(Graph g) {
	cout << "So luong dinh : " << g.n << endl;
	for (int i = 1; i <= g.n; i++) {
		for (int j = 1; j <= g.n; j++) {
			cout << g.A[i][j] << " ";
		}
		cout << endl;
	}
}

// chuyen tu ma tran sang danh sach ke
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
int pre[maxn];

void dijkstra(int s, int t, Graph g) {
	vector<int> d(g.n + 1, INF); // cho tat ca cac khoang cach la infinity
	d[s] = 0; // ngoai tru dinh bat dau la 0
	pre[s] = s; // danh dau duong di
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q; // lay ra dinh ke co khoang cach ngan nhat
	Q.push({0, s});
	while (!Q.empty()) {
		pair<int, int> top = Q.top();
		Q.pop();
		int u = top.second;
		int length = top.first;
		if (length > d[u]) continue;
		for (auto it : adj[u]) { // duyet cac dinh ke voi u
			int v = it.first;
			int w = it.second;
			if (d[v] > d[u] + w) {
				d[v] = d[u] + w;
				Q.push({d[v], v});
				pre[v] = u;
			}
		}
	}
	cout << "Khoang cach ngan nhat giua " << s << " va " << t << " la: " << d[t] << endl;
	vector<int> path;
	while (t != s) {
		path.push_back(t);
		t = pre[t];
	}
	path.push_back(s);
	reverse(path.begin(), path.end());
	cout << "Duong di: ";
	for (int i = 0; i < path.size(); i++) {
		cout << path[i];
		if (i < path.size() - 1) cout << " -> ";
	}
	cout << endl;
}



int main() {
	Graph g;
	Input(g);
	Output(g);
	transfer(g);
	int s, t;
	cout << "\nNhap vao dinh bat dau: ";
	cin >> s;
	cout << "\nNhap vao dinh ket thuc: ";
	cin >> t;
	dijkstra(s, t, g);
	return 0;
}