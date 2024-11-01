#include <bits/stdc++.h>

using namespace std;


//tinh tong 1
/*int dequy(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+dequy(n-1);
	}
}

int main()
{
	int n;cin>>n;
	cout<<dequy(n)<<endl;
	return 0;
}*/

//tinh tong 2

/*int sum(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return n*n+sum(n-1);
	}
}
int main()
{
	int n;cin>>n;
	cout<<sum(n)<<endl;
	return 0;
}*/

// tinh so fibonacci

/*int fibo(int n){
	if(n <= 2){
		return 1;
	}
	else return fibo(n - 1) + fibo(n - 2);
}

int main(){
	int n;
	cin >> n;
	cout << fibo(n) << endl;
	return 0;
}*/

// in phan tu tu 0 den n
/*void printElement(int n, int idx){
	if(idx > n){
		return;
	}
	else{
		cout << idx << " ";
		return printElement(n, idx + 1);
	}
}

int main(){
	int n;
	cin >> n;
	printElement(n, 0);
	return 0;
}*/

// day so fibonacci thu n

/*int F[16]={0};

int Fibo(int n){
	if(F[n] != 0){
		return F[n];
	}
	if(n == 1){
		F[1] = 0;
		return F[1];
	}
	else if(n == 2){
		F[2] = 1;
		return 1;
	}
	else{
		F[n] = F[n - 1] + F[n - 2];
		return Fibo(n - 1) + Fibo(n - 2);
	}
}

int main(){
	int n;
	cin >> n;
	cout << Fibo(n) << endl;
	return 0;
}*/

// uoc chung lon nhat va boi chung nho nhat
/*using ll = long long;

ll gcd(ll a, ll b){
	if()
}

int main(){
	ll n, m;
	cin >> n >> m;
}*/

// luy thua nhi phan
/*using ll = long long;
ll MOD = 1e9 + 7;

ll binPow(ll a, ll b){
	if(b == 1){
		return a;
	}
	else{
		ll temp = binPow(a, b / 2);
		if(b % 2 == 0){
			return temp % MOD * temp % MOD;
		}
		else{
			return temp % MOD * temp % MOD * a % MOD;
		}
	}
}

int main(){
	ll a, b;
	cin >> a >> b;
	cout << binPow(a, b) << endl;
	return 0;
}*/

// tinh tong 5

/*double solve(int n){
	if(n == 1){
		return 1;
	}
	else{
		cout << n << " ";
		return (double)1 / n + solve(n - 1);
	}
}

int main(){
	int n;
	cin >> n;
	cout << fixed << setprecision(3) << solve(n) << endl;
	return 0;
}*/

// chuyen so thap phan sang nhi phan
/*using ll = long long;

void bin(ll n){
	if(n == 0) return;
	else{
		bin(n / 2);
		cout << n % 2;
	}
}

int main(){
	ll n;
	cin >> n;
	if(n == 0){
        cout << "0" << endl;
        return 0;
    }
	bin(n);
	return 0;
}*/

// chuyen so thap phan sang so he 16
/*using ll = long long;
string s = "0123456789ABCDEF";

void hex16(ll n){
	if(n == 0){
		return;
	}
	else{
		hex16(n / 16);
		int r = n % 16;
		cout << s[r];
	}
}

int main(){
	ll n;
	cin >> n;
	if(n == 0){
		cout << "0" << endl;
		return 0;
	}
	hex16(n);
	return 0;
}*/

// tinh tong cac chu so
/*using ll = long long;

ll sum = 0;

void sumOfNumber(ll n){
	if(n == 0) return;
	else{
		sum += n % 10;
		sumOfNumber(n / 10);
	}
}

int main(){
	ll n;
	cin >> n;
	sumOfNumber(n);
	cout << sum << endl;
	return 0;
}*/

// dem cac chu so
/*using ll = long long;

ll cnt = 0;

void cntOfNumber(ll n){
	if(n == 0) return;
	else{
		cnt++;
		cntOfNumber(n / 10);
	}
}

int main(){
	ll n;
	cin >> n;
	if(n == 0){
		cout << "1" << endl;
		return 0;
	}
	cntOfNumber(n);
	cout << cnt << endl;
	return 0;
}*/

// tim chu so dau tien cua so nguyen
/*using ll = long long;
bool Final = false;

int r = 0;

void solve(ll n){
	if(n == 0) return;
	else{
		solve(n / 10);
		if(Final){
			return;
		}
		r = n % 10;
		Final = true;
	}
}
 

int main(){
	ll n;
	cin >> n;
	solve(n);
	cout << r << endl;
	return 0;
}*/

// so nho nhat va so lon nhat

/*using ll = long long;
int maxVal = INT_MIN;
int minVal = INT_MAX;

void solve(ll n){
	if(n == 0) return;
	else{
		int r = n % 10;
		if(maxVal < r) maxVal = r;
		if(r < minVal) minVal = r;
		solve(n / 10);
	}
}

int main(){
	ll n;
	cin >> n;
	solve(n);
	cout << maxVal << " " << minVal << endl;
	return 0;
}*/

// in ra so nguyen
/*using ll = long long;

void printInterger1(ll n){
	if(n == 0) return;
	else{
		printInterger1(n / 10);
		int r = n % 10;
		cout << r << " ";
	}
}

void printInterger2(ll n){
	if(n == 0) return;
	else{
		int r = n % 10;
		cout << r << " ";
		printInterger2(n / 10);
	}
}

int main(){
	ll n;
	cin >> n;
	printInterger1(n);
	cout << endl;
	printInterger2(n);
	return 0;
}*/

// tong chu so chan va tong chu so le
/*using ll = long long;

int even = 0, odd = 0;

void solve(ll n){
	if(n == 0) return;
	else{
		int r = n % 10;
		if(r % 2 == 0) even += r;
		else odd += r;
		solve(n / 10);
	}
}


int main(){
	ll n;
	cin >> n;
	solve(n);
	cout << even << endl << odd << endl;
	return 0;
}*/

// kiem tra chu so chan
/*using ll = long long;

bool ok = true;

void solve(ll n){
	if(n == 0) return;
	else{
		if(!ok) return;
		int r = n % 10;
		if(r % 2 != 0) ok = false;
		solve(n / 10);
	}
}

int main(){
	ll n;
	cin >> n;
	solve(n);
	if(!ok){
		cout << "NO" << endl;
	}
	else cout << "YES" << endl;
	return 0;
}*/

// dem so thao tac
/*int step = 0;

void solve(int n){
	if(n == 1) return;
	else{
		if(n % 3 == 0){
			step++;
			solve(n / 3);
		}
		else if(n % 2 == 0){
			step++;
			solve(n / 2);
		}
		else{
			step++;
			solve(n - 1);
		}
	}
}

int main(){
	int n;
	cin >> n;
	solve(n);
	cout << step << endl;
	return 0;
}*/

// binary search

/*int binarySearch(int x){
	
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	
}*/

// kiem tra mang doi xung su dung de quy
/*bool ok = true;
void solve(int a[], int l, int r){
	if(l >= r) return;
	else{
		solve(a, l + 1, r - 1);
		if(a[l] != a[r]){
			ok = false;
		}
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
	if(ok){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}*/

// in mang

/*void printE(int n, int a[]){
	if(n == -1) return;
	else{
		printE(n - 1, a);
		cout << a[n] << " ";
	}
}

void printEE(int n, int a[]){
	if(n == -1) return;
	else{
		cout << a[n] << " ";
		printEE(n - 1, a);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	printE(n - 1, a);
	cout << endl;
	printEE(n - 1, a);
	return 0;
}*/

// kiem tra mang toan chan

/*bool check(int a[], int n){
	if(n == -1) return true;
	if(a[n] % 2 != 0) return false;
	return check(a, n - 1);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(check(a, n - 1)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}*/

// kiem tra mang tang dan
/*bool ok = true;

void check(int a[], int n){
	if(n == 0) return;
	else{
		check(a, n - 1);
		if(a[n] <= a[n - 1]) ok = false;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	check(a, n - 1);
	if(ok){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	return 0;
}*/

// tim kiem nhi phan

/*int binarySearch(int a[], int l, int r, int x){
	if(l > r) return 0;
	int mid = (r + l) / 2;
	if(a[mid] == x) return 1;
	else if(a[mid] > x){
		return binarySearch(a, l, mid - 1, x);
	}
	else{
		return binarySearch(a, mid + 1, r, x);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int i = 0, j = n - 1;
	int x;
	cin >> x;
	cout << binarySearch(a, i, j, x) << endl;
	return 0;
}*/

// lower_bound
/*int n;
int res = INT_MAX;
int lowerBound(int a[], int l, int r, int x){
	if(l > r) return n;
	int mid = (r + l) / 2;
	if(a[mid] >= x && mid < res){
		res = mid;
	}
	else if(a[mid] < x){
		lowerBound(a, mid + 1, r, x);
	}
	return res;
}

int main(){
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x;
	cin >> x;
	cout << lowerBound(a, 0, n - 1, x) << endl;
	return 0;
}*/

// luy thua nhi phan
/*using ll = long long;

ll binPow(ll a, ll b){
	if(b == 0){
		return 1;
	}
	ll res = binPow(a, b / 2);
	if(b % 2 == 0){
		ll ans = res * res;
		cout << ans << endl;
		return ans;
	}
	else{
		ll ans1 = res * res * a;
		cout << ans1 << endl;
		return ans1;
	}
}


int main(){
	ll a, b;
	cin >> a >> b;
	cout << binPow(a, b) << endl;
	return 0;
}*/

// dem so thao tac

int solve(int n){
	if(n == 1) return 0;
	int x, y , z;
	x = y = z = INT_MAX;
	if(n % 2 == 0){
		x = 1 + solve(n / 2);
		cout << "X : " << x << endl;
	}
	if(n % 3 == 0){
		y = 1 + solve(n / 3);
		cout << "Y : " << y << endl;
	}
	if(n > 1){
		z = 1 + solve(n - 1);
		cout << "Z : " << z << endl;
	}
	return min({x, y , z});
}

int main(){
	int n;
	cin >> n;
	cout << solve(n) << endl;
	return 0;
}