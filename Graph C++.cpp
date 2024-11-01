#include <bits/stdc++.h>


using namespace std;

// Don do thi vo huong
// Da do thi vo huong
// Gia do thi vo huong (co khuyen)
// Don do thi co huong
// Da do thi co huong
// Dinh ke, canh lien thuoc
// Bac cua dinh (vo huong)
// Ban bac cua dinh (ban bac ra, ban bac vao)
// Duong di, Duong di don (khong co dinh nao bi trung)
// Chu trinh (la duong di ma dinh dau trung voi dinh cuoi va khong co canh nao trung nhau)
// Chu trinh don (ngoai tru dinh dau va dinh cuoi thi khong co dinh nao trung nhau va tat nhien cung khong co canh nao duoc trung)
// Lien thong (luon luon co duong di giua 2 canh bat ki)
// Thanh phan lien thong (khi 1 do thi khong la lien thong no se phan ra ra cac thanh phan lien thong)
// Luu y la dinh co lap cung la 1 thanh phan lien thong
// Lien thong chi ton tai tren do thi vo huong
// Lien thong manh va lien thong yeu (ap dung voi do thi co huong)
// Lien thong manh la luon luon co duong di giua 2 dinh bat ki
// Lien thong yeu la do thi co lien thong vo huong tuong ung
// Mot do thi la lien thong manh chac chan la lien thong yeu nhung nguoc lai thi chua chac

// BIEU DIEN :
// Ma tran ke
// Ma tran ke doi voi do thi vo huong co tinh chat doi xung o duong cheo chinh va tong so phan tu bang 2 lan so canh
// Ma tran ke doi voi do thi co huong co tinh chat tong so phan tu bang chinh so canh, hang la ban bac ra, cot la ban bac vao
// Ma tran trong so
// Uu diem : de cai dat, muon xem 2 dinh co ke nhau hay khong chi mat O(1)
// Nhuoc diem : ton khong gian luu tru khi so dinh qua lon, luon luon mat On^2 o nho

// Danh sach canh : (thuong INPUT su dung thang nay) -> Luu dinh dau va dinh cuoi

// Danh sach ke : (thang nay cung hay dung lam INPUT) -> Luu mot danh sach cac canh ke voi no


// chuyen danh sach canh sang ma tran ke

int a[1001][1001];
int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

// chuyen tu danh sach canh sang danh sach ke
vector<int> adj[1001];
int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		cout << i << " : ";
		sort(adj[i].begin(), adj[i].end());
		for(int j = 0; j < adj[i].size(); j++){
			cout << adj[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

// chuyen tu ma tran ke sang danh sach canh
int a[1001][1001];
vector<pair<int, int>> edge;
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1 && i > j){
				edge.push_back({i, j});
			}
		}
	}
	for(auto x : edge){
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++){
		cout << i << " : ";
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1){
				cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

// chuyen tu danh sach ke sang danh sach canh
int a[1001];
vector<pair<int, int>> edge;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s, num;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> num){
			if(i < stoll(num)){
				edge.push_back({i, stoll(num)});
			}
		}
	}
	for(auto x : edge){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}

// chuyen tu danh sach canh sang danh sach ke co huong
vector<int> adj[1001];
int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x]. push_back(y);
	}
	for(int i = 1; i <= n; i++){
		cout << i << " : ";
		sort(adj[i].begin(), adj[i].end());
		for(auto x : adj[i]){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}

// chuyen tu danh sach ke sang danh sach canh co huong
vector<pair<int, int>> edge;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s, num;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> num){
			edge.push_back({i, stoll(num)});
		}
	}
	sort(edge.begin(), edge.end());
	for(auto x : edge){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}

// chuyen ma tran ke sang danh sach canh co huong
int a[1001][1001];
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j]){
				cout << i << " " << j << endl;
			}
		}
	}
	cout << endl;
	for(int i = 1; i <= n; i++){
		cout << i << " : ";
		for(int j = 1; j <= n; j++){
			if(a[i][j]){
				cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

// chuyen ma tran trong so sang danh sach canh
struct edge{
	int adj1, adj2, w;
};
int a[1001][1001];
int main(){
	int n;
	cin >> n;
	edge D[1001];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	int k = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] != 0 && i < j){
				D[k].adj1 = i;
				D[k].adj2 = j;
				D[k].w = a[i][j];
				k++;
			}
		}
	}
	for(int i = 0; i < k; i++){
		cout << D[i].adj1 << " " << D[i].adj2 << " " << D[i].w << endl;
	}
	return 0;
}

// DFS : Depth First Search
vector<int> adj[1001];
bool visited[1001];
void DFS(int u){
	cout << u << " ";
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}

int main(){
	// Nhap so luong dinh va so luong canh
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	DFS(1);
	return 0;
}

// DFS tren do thi co huong
vector<int> adj[1001];
bool visited[1001];

void DFS(int u){
	cout << u << " ";
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}

int main(){
	int n, m , s;
	cin >> n >> m >> s;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	memset(visited, false, sizeof(visited));
	DFS(s);
	return 0;
}

// DFS voi input la ma tran ke
int a[1001][1001];
int n;
bool visited[1001];
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	
}

// Breadth First Search
//1 2
//1 3
//1 5
//1 10
//2 4
//3 6
//3 7
//3 9
//5 8
//6 7
//8 9

vector<int> adj[1001];
bool visited[1001];

void BFS(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = true;
	while(!Q.empty()){
		int v = Q.front();
		Q.pop();
		cout << v << " ";
		for(auto x : adj[v]){
			if(!visited[x]){
				Q.push(x);
			    visited[x] = true;
			}
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	BFS(1);
	return 0;
}

// BFS tren do thi vo huong
vector<int> adj[1001];
bool visited[1001];

void BFS(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = true;
	while(!Q.empty()){
		int v = Q.front();
		Q.pop();
		cout << v << " ";
		for(auto x : adj[v]){
			if(!visited[x]){
				Q.push(x);
			    visited[x] = true;
			}
		}
	}
}

int main(){
	int n, m, s;
	cin >> n >> m >> s;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	memset(visited, false, sizeof(visited));
	BFS(s);
	return 0;
}