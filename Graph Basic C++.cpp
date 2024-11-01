
#include <bits/stdc++.h>

using namespace std;

// chuyen tu danh sach canh sang danh sach ke
/*vector<int> adj[1001];

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	for(int i = 1; i <= n; i++){
		cout << i << " : ";
		-
		for(auto x : adj[i]){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}*/

// chuyen tu danh sach ke sang danh sach canh
/*vector<pair<int, int>> edge;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		while(ss >> token){
			if(i < stoll(token)){
				edge.push_back({i, stoll(token)});
			}
		}
	}
	sort(edge.begin(), edge.end());
	for(auto x : edge){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}*/

// chuyen tu danh sach canh sang danh sach ke co huong
/*vector<int> adj[1001];
int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	for(int i = 1; i <= n; i++){
		cout << i << " : ";
		for(auto x : adj[i]){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}*/

// chuyen tu danh sach ke sang danh sach canh co huong
/*vector<pair<int, int>> edge;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		while(ss >> token){
			edge.push_back({i, stoll(token)});
		}
	}
	sort(edge.begin(), edge.end());
	for(auto x : edge){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}*/

//  Ma trận kề sang danh sách kề, danh sách cạnh (vô hướng)
/*int a[1001][1001];
vector<int> adj[1001];
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
			if(a[i][j] && i > j){
				edge.push_back({i, j});
			}
			if(a[i][j] && i < j){
				adj[i].push_back(j);
			    adj[j].push_back(i);
			}
		}
	}
	sort(edge.begin(), edge.end());
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	for(auto x : edge){
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++){
		cout << i << " : ";
		for(auto x : adj[i]){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}*/

// DFS : Depth First Search
/*vector<int> adj[1001];
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
	DFS(s);
	return 0;
}*/

// BFS : Breath First Search

/*vector<int> adj[1001];
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
}*/

// BFS tren do thi co huong

/*vector<int> adj[1001];
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
	}
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	memset(visited, false, sizeof(visited));
	BFS(s);
	return 0;
}*/

// dem so thanh phan lien thong
/*vector<int> adj[1005];
bool visited[1005];

void DFS(int u){
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			DFS(v);
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
	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			DFS(i);
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}*/

// kiem tra do thi lien thong manh

/*vector<int> adj[1005];
bool visited[1005];

void DFS(int u){
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			DFS(v);
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
	}
	for(int i = 1; i <= n; i++){
		memset(visited, false, sizeof(visited));
		DFS(i);
		for(int j = 1; j <= n; j++){
			if(!visited[j]){    
				cout << "0" << endl;
				return 0;
			}
		}
	}
	cout << "1" << endl;
	return 0;
}*/

// tim duong di tren do thi vo huong bang DFS
/*vector<int> adj[1005];
bool visited[1005];
vector<int> ans;
bool flag = false;
int n, m, s, t;

void DFS(int u){
	visited[u] = true;
	ans.push_back(u);
	if(u == t){
		flag = true;
		return;
	}
	else{
		for(auto v : adj[u]){
			if(!visited[v]){
				DFS(v);
				if(!flag){
					ans.pop_back();
				}
			}
			if(flag){
				break;
			}
		}
	}
}

int main(){
	cin >> n >> m >> s >> t;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	DFS(s);
	if(!flag){
		cout << "-1" << endl;
		return 0;
	}
	else{
		for(auto x : ans){
			cout << x << " ";
		}
	}
	return 0;
}*/

// tim duong di tren do thi vo huong bang BFS
/*vector<int> adj[1005];
bool visited[1005];
vector<int> ans;
bool flag = false;
int n, m, s, t;


void BFS(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = true;
	while(!Q.empty()){
		int v = Q.front();
		Q.pop();
		ans.push_back(v); 
		if(v == t){
			flag = true;
			break;
		}
		else{
			for(auto x : adj[v]){
				if(!visited[x]){
					Q.push(x);
					visited[x] = true;
				}
			}
		}
	}
}

int main(){
	cin >> n >> m >> s >> t;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	BFS(s);
	if(!flag){
		cout << "-1" << endl;
	}
	else{
		for(auto x : ans){
			cout << x << " ";
		}
	}
	return 0;
}*/

// tim duong di tren do thi vo huong bang DFS (truy vet)
/*vector<int> adj[1005];
bool visited[1005];
int parent[1005];

void DFS(int u){
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}

int main(){
	int n, m, s, t;
	cin >> n >> m >> s >> t;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	DFS(s);
	if(!visited[t]){
		cout << "-1" << endl;
	}
	else{
		vector<int> ans;
		while(t != s){
			ans.push_back(t);
			t = parent[t];
		}
		ans.push_back(s);
		reverse(ans.begin(), ans.end());
		for(auto x : ans){
			cout << x << " ";
		}
	}
	return 0;
}*/

// tim duong di tren do thi vo huong bang BFS (truy vet)
/*vector<int> adj[1005];
bool visited[1005];
int parent[1005];

void BFS(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = true;
	while(!Q.empty()){
		int v = Q.front();
		Q.pop();
		for(auto x : adj[v]){
			if(!visited[x]){
				Q.push(x);
				visited[x] = true;
				parent[x] = v;
			}
		}
	}
}

int main(){
	int n, m, s, t;
	cin >> n >> m >> s >> t;
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
	if(!visited[t]){
		cout << "-1" << endl;
	}
	else{
		vector<int> ans;
		while(t != s){
			ans.push_back(t);
			t = parent[t];
		}
		ans.push_back(s);
		reverse(ans.begin(), ans.end());
		for(auto x : ans){
			cout << x << " ";
		}
	}
	return 0;
}*/

// tim duong di tren do thi co huong bang DFS
/*vector<int> adj[1005];
bool visited[1005];
int parent[1005];

void DFS(int u){
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}

int main(){
	int n, m, s, t;
	cin >> n >> m >> s >> t;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	DFS(s);
	if(!visited[t]){
		cout << "-1" << endl;
	}
	else{
		vector<int> ans;
		while(t != s){
			ans.push_back(t);
			t = parent[t];
		}
		ans.push_back(s);
		reverse(ans.begin(), ans.end());
		for(auto x : ans){
			cout << x << " ";
		}
	}
	return 0;
}*/

// tim duong di tren do thi co huong bang BFS

/*vector<int> adj[1005];
bool visited[1005];
int parent[1005];

void BFS(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = true;
	while(!Q.empty()){
		int v = Q.front();
		Q.pop();
		for(auto x : adj[v]){
			if(!visited[x]){
				Q.push(x);
				visited[x] = true;
				parent[x] = v;
			}
		}
	}
}

int main(){
	int n, m, s, t;
	cin >> n >> m >> s >> t;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		sort(adj[i].begin(), adj[i].end());
	}
	BFS(s);
	if(!visited[t]){
		cout << "-1" << endl;
	}
	else{
		vector<int> ans;
		while(t != s){
			ans.push_back(t);
			t = parent[t];
		}
		ans.push_back(s);
		reverse(ans.begin(), ans.end());
		for(auto x : ans){
			cout << x << " ";
		}
	}
	return 0;
}*/

// kiem tra duong di
vector<int> adj[1005];
bool visited[1005];

void DFS(int u){
	visited[u] = true;
	for(auto v : adj[u]){
		if(!visited[v]){
			DFS(v);
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
	int q;
	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		memset(visited, false, sizeof(visited));
		DFS(l);
		if(!visited[r]){
			cout << "-1" << endl;
		}
		else cout << "1" << endl;
	}
	return 0;
}