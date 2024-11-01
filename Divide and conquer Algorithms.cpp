#include <bits/stdc++.h>

using namespace std;

// luy thua ma tran
// binary search thuc chat la decrease and conquer (giam va tri)

// luy thua nhi phan dao
/*using ll = long long;
ll MOD = 1e9 + 7;

ll reVerse(ll n){
	ll res = 0;
	while(n){
		ll t = n % 10;
		res = res * 10 + t;
		n /= 10;
	}
	return res;
}

ll binPow(ll a, ll b){
	if(b == 0){
		return 1;
	}
	ll temp = binPow(a, b / 2);
	if(b % 2 == 0){
		return ((temp % MOD) * (temp % MOD)) % MOD;
	}
	else{
		return (((temp * MOD) * (temp % MOD)) % MOD * (a % MOD)) % MOD;
	}
}

int main(){
	ll n;
	cin >> n;
	cout << binPow(n, reVerse(n)) << endl;
	return 0;
}*/

// merge sort
/*void merge(int a[], int l , int m, int r){
	vector<int> v1(a + l, a + m + 1);
	vector<int> v2(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	while (i < v1.size() && j < v2.size()){
		if(v1[i] <= v2[j]){
			a[l] = v1[i];
			++l; ++i;
		}
		else{
			a[l] = v2[j];
			++l; ++j;
		}
	}
	while(i < v1.size()){
		a[l] = v1[i];
		++l; ++i;
	}
	while(j < v2.size()){
		a[l] = v2[j];
		++l; ++j;
	}
}

void mergeSort(int a[], int l, int r){
	if(l < r){
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m , r);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	mergeSort(a, 0, n - 1);
	for(auto x : a){
		cout << x << " ";
	}
	return 0;
}*/

// dem day so
/*using ll = long long;
int main(){
	ll n;
	cin >> n;
}*/

// xau fibo
/*using ll = long long;

ll Fibo[92];

char find(ll n, ll k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= Fibo[n - 2]){
		return find(n - 2, k);
	}
	else{
		return find(n - 1, k - Fibo[n - 2]);
	}
}

int main(){
	ll n, k;
	cin >> n >> k;
	Fibo[1] = 1; Fibo[2] = 1;
	for(int i = 3; i <= 92; i++){
		Fibo[i] = Fibo[n - 1] + Fibo[n - 2];
	}
	cout << find(n, k) << endl;
	return 0;
}*/

// gap doi day so

/*using ll = long long;

ll Find(ll n, ll k){
	if(k == pow(2, n - 1)){
		return n;
	}
	else if(k <= pow(2, n - 1)){
		return Find(n - 1, k);
	}
	else{
		return Find(n - 1, k - pow(2, n - 1));
	}
}

int main(){
	ll n, k;
	cin >> n >> k;
	cout << Find(n, k) << endl;
	return 0;
}*/

// floor

/*int Find(int a[], int l, int r, int x){
	int mid = (l + r) / 2;
	if(a[mid] )
}

int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}*/

// dem so bit 1
/*using ll = long long;
ll ans = 0;

void solve(int n, int l, int r){
	if(n == )
}

int main(){
	int n, r, l;
	cin >> n >> r >> l;
}*/

// dem so 0
/*int cnt = 0;

void solve(int a[], int l, int r){
	if(l < r){
		int m = (l + r) / 2;
		if(a[m] == 0){
			cnt++;
		}
		solve(a, l, m);
		solve(a, m + 1, r);
	}
}


int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	solve(a, 0, n - 1);
	cout << cnt << endl;
	return 0;
}*/

// floor
/*int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	auto it = upper_bound(a, a + n, x);
	if(it != a){
		--it;
		cout << *it << endl;
	}
	else cout << "-1" << endl;
	return 0;
}*/

// tron 2 mang
/*int main(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	int c[n + m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	int i = 0, j = 0;
	int h = 0;
	while(i < n && j < m){
		if(a[i] <= b[j]){
			c[h] = a[i];
			++i; ++h;
		}
		else{
			c[h] = b[j];
			++j; ++h;
		}
	}
	while(i < n){
		c[h] = a[i];
		++i; ++h;
	}
	while(j < m){
		c[h] = b[j];
		++j; ++h;
	}
	cout << c[k] << endl;
	return 0;
}*/

// tim kiem nhi phan

/*int binary_Search(int a[], int x, int l, int r){
	if(l > r) return 0;
	int mid = (l + r) / 2;
	if(a[mid] == x){
		return 1;
	}
	else if(a[mid] < x){
		return binary_Search(a, x, l, mid - 1);
	}
	else{
		return binary_Search(a, x, mid + 1, r);
	}
}

int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(binary_Search(a, x, 0, n - 1)){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	return 0;
}*/

// day xau nhi phan
int F[100];

char Find(int n, int k){
	if(n == 1) return '0';
	if(n == 2) return '1';
	if(k <= F[n - 2]){
		return Find(n - 2, k);
	}
	else{
		return Find(n - 1, k - F[n - 2]);
	}
}

int main(){
	int n, k;
	cin >> n >> k;
	F[1] = 1;
	F[2] = 1;
	for(int i = 3; i <= 92; i++){
		F[i] = F[i - 1] + F[i - 2];
	}
	cout << Find(n, k) << endl;
	return 0;
}