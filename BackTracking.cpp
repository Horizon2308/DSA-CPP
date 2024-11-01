     #include <bits/stdc++.h>

using namespace std;

/*int n, X[11];


void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		X[i] = j;
		if(i == n)
		{
			for(int k = 1; k <= n; k++)
			{
				cout << X[k];
			}
			cout << endl;
		}
		else
		{
			Try(i + 1);
		}
		
	}
}

int main()
{
	cin >> n;
	Try(1);
	return 0;
}*/

// sinh to hop chap k
/*int n,X[100],k;

void inkqua()
{
	for(int i = 1; i <= k; i++){
		cout << X[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			inkqua();
		}
		else{
			Try(i + 1);
		}
	}
}

int main()
{
	cin >> n >> k;
	Try(1);
	return 0;
}*/

// tap hop co tong bang S

/*int n,X[100],k,s;
int cnt = 0;

void Try(int i, int sum, int dem){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		sum += X[i];
		dem++;
		if(dem == k && sum == s){
			cnt++;
		}
		else if (sum < s && dem < k){
			Try(i + 1, sum, dem);
		}
		sum -= j;
		dem -= 1;
	}
}

int main(){
	cin >> n >> k >> s;
	Try(1,0,0);
	cout << cnt << endl;
	return 0;
}*/

// bai toan n Queen 1
int n, X[100];
bool cot[100], xuoi[100], nguoc[100];
int cnt = 0;

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && xuoi[n + i - j] == 0 && nguoc[i + j - 1] == 0){
			X[i] = j;
			cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 1;
			if(i == n){
				cnt++;
			}
			else{
				Try(i + 1);
			}
			cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 0;
		}
	}
}

int main(){
	cin >> n;
	Try(1);
	cout << cnt << endl;
	return 0;
}

// bai toan n Queen 2
/*const int n = 8;
int a[9][9];
int X[100];
bool cot[100], xuoi[100], nguoc[100]; 
int sum = 0;
int ans = 0;

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && xuoi[n + i - j] == 0 && nguoc[i + j - 1] == 0){
			X[i] = j;
			cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 1;
			if(i == n){
				sum = 0;
				for(int k = 1; k <= n; k++){
					sum += a[X[k]][k];
				}
				ans = max(ans, sum);
			}
			else{
				Try(i + 1);
			}
			cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 0;
		}
	}
}

int main() {
    for(int i = 1; i <= 8; i++){
    	for(int j = 1; j <= 8; j++){
    		cin >> a[i][j];
		}
	}
	Try(1);
	cout << ans << endl;
    return 0;
}*/


// day con co tong bang k
/*int n, k, X[20];
bool used[20];
bool ok = false;


void Try(int i, int sum, int pos){
	
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	memset(used, false, sizeof(used));
}*/

// tap hop co tong bang k
/*int n, k, s;
int X[100];
int cnt = 0;
void Try(int i, int sum){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		sum += j;
		if(i == k){
			if(sum == s){
				cnt++;
			}
		}
		else{
			Try(i + 1, sum);
		}
		sum -= j;
	}
}

int main(){
	cin >> n >> k >> s;
	Try(1, 0);
	cout << cnt << endl;
	return 0;
}*/

// rat in maze 1
/*int n, a[100][100];
bool check = false;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j, string s){
	if(i == n && j == n){
		cout << s << endl;
		check = true;
	}
	else{
		// di xuong duoi
		if(i + 1 <= n && a[i + 1][j] == 1){
			a[i + 1][j] = 0;
			s += 'D';
			Try(i + 1, j, s);
			a[i + 1][j] = 1;
			s.pop_back();
		}
		// di sang phai
		if(j + 1 <= n && a[i][j + 1] == 1){
			a[i][j + 1] = 0;
			s += 'R';
			Try(i, j + 1, s);
			a[i][j + 1] = 1;
			s.pop_back();
		}
	}
}

int main(){
	nhap();
	string s = "";
	Try(1, 1, s);
	if(check == false){
		cout << "-1" << endl;
		return 0;
	}
	return 0;
}*/

// rat in maze 2
/*int n, a[100][100];
bool check = false;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j, string s){
	if(i == n && j == n){
		cout << s << endl;
		check = true;
	}
	else{
		// di xuong duoi
		if(i + 1 <= n && a[i + 1][j] == 1){
			a[i + 1][j] = 0;
			s += 'D';
			Try(i + 1, j, s);
			a[i + 1][j] = 1;
			s.pop_back();
		}
		// di sang phai
		if(j + 1 <= n && a[i][j + 1] == 1){
			a[i][j + 1] = 0;
			s += 'R';
			Try(i, j + 1, s);
			a[i][j + 1] = 1;
			s.pop_back();
		}
		// di sang trai
		if(j - 1 >= 1 && a[i][j - 1] == 1){
			a[i][j - 1] = 0;
			s += 'L';
			Try(i, j - 1, s);
			a[i][j - 1] = 1;
			s.pop_back();
		}
		// di len tren
		if(i - 1 >= 1 && a[i - 1][j] == 1){
			a[i - 1][j] = 0;
			s += 'U';
			Try(i - 1, j, s);
			a[i - 1][j] = 1;
			s.pop_back();
		}
	}
}

int main(){
	nhap();
	string s = "";
	if(a[1][1] == 1){
		a[1][1] = 0;
		Try(1, 1, s);
		if(check == false){
			cout << "-1" << endl;
			return 0;
		}
	}
	return 0;
}*/

// day so co tong bang k
/*int n, k;
int a[100], X[100];
bool check = false;

void Try(int i, int sum, int pos){
	for(int j = pos; j <= n; j++){
		X[i] = a[j];
		sum += X[i];
		if(sum == k){
			check = true;
			cout << "[";
			for(int l = 1; l <= i; l++){
				cout << X[l];
				if(l == i) cout << "]";
				else cout << " ";
			}
			cout << endl;
		}
		else if(sum < k){
			Try(i + 1, sum, pos + 1);
		}
		sum -= X[i];
	}
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	Try(1, 0, 1);
	if(!check){
		cout << "-1" << endl;
	}
	return 0;
}*/

// chia mang
/*int n, k;
int a[100];
int sum = 0;
bool check = false;

void Try(int i, int pos, int tong, int cnt){
	if(cnt == k){
		check = true;
		return;
	}
	for(int j = pos; j <= n; j++){
		tong += a[j];
		if(tong == sum){
			cout << tong << endl;
			Try(i + 1, j + 1, 0, cnt + 1);
		}
		else if(tong < sum){
			cout << tong << endl;
			Try(i + 1, j + 1, tong, cnt);
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum % k != 0){
		cout << "0" << endl;
		return 0;
	}
	sum /= k;
	Try(1, 1, 0, 0);
	if(!check){
		cout << "0" << endl;
	}
	else{
		cout << "1" << endl;
	}
	return 0;
}*/

// may ATM

/*int n, S, T[100], X[100];
bool check = false;

void Try(int i, int k, int sum){
	for(int j = X[i - 1] + 1; j <= n - k + i; i++){
		X[i] = T[j];
		if(i == k){
			for(int h = 1; h <= k; h++){
				sum += T[X[i]];
			}
			if(sum == S){
				cout << i << endl;
				return;
			}
		}
		else
			Try(i + 1, k + 1, sum);
	}
}
int main(){
	cin >> n >> S;
	for(int i = 1; i <= n; i++){
		cin >> T[i];
	}
	sort(T + 1, T + n + 1);
	Try(1, 1, 0);
	return 0;
}*/

// bai toan nguoi du lich
/*int n, C[100][100], X[100];
bool visited[100];
int res = INT_MAX;
int cmin = INT_MAX;

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> C[i][j];
			cmin = min(cmin, C[i][j]);
		}
	}
}
void Try(int i, int cost){
	for(int j = 2; j <= n; j++){
		if(!visited[j]){
			visited[j] = true;
			X[i] = j;
			cost += C[X[i- 1]][X[i]];
			if(i == n){
				cost += C[1][X[i]];
				res = min(res, cost);
			}
			else if(cost + (n - i + 1) * cmin < res){
				Try(i + 1, cost);
			}
			cost -= C[X[i- 1]][X[i]];
			visited[j] = false;
		}
	}
}

int main(){
	nhap();
	X[1] = 1;
	memset(visited, false, sizeof(visited));
	Try(2, 0);
	cout << res << endl;
	return 0;
}*/

// day con tang dan
/*int n, a[100];
int X[100];
vector<string> v;

void Try(int i, int pos, string res){
	for(int j = pos; j <= n; j++){
		if(a[j] > X[i - 1]){
			X[i] = a[j];
			if(i > 1){
				v.push_back(res);
				Try(i + 1, j + 1, res);
			}
			else{
				Try(i + 1, j + 1, res);
			}
			res.pop_back();
			res.pop_back();
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	string res = "";
	Try(1, 1, res);
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;
}*/

// subset sum problem
/*int n;
int a[100], X[100];
bool check = false;

void Try(int i, int sum){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			int ans1 = 0; int ans2 = 0;
			for(int k = 1; k <= n; k++){
				if(X[k] == 1){
					ans1 += a[k];
				}
				else ans2 += a[k];
			}
			if(ans1 == sum && ans2 == sum){
				check = true;
			}
		}
		else{
			Try(i + 1, sum);
		}
	}
}

int main(){
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum % 2 != 0){
		cout << "0" << endl;
		return 0;
	}
	sum /= 2;
	Try(1, sum);
	if(!check){
		cout << "0" << endl;
	}
	else{
		cout << "1" << endl;
	}
	return 0;
}*/

// so xa cach
/*int n, X[100];
bool used[100];

bool check(string s){
	if(s[0] == '0'){
		return false;
	}
	for(int i = 1; i < s.size(); i++){
		if(s[i] == '0'){
			return false;
		}
		if(abs(s[i] - s[i - 1]) == 1){
			return false;
		}
	}
	return true;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == false){
			X[i] = j;
			used[j] = true;
			if(i == n){
				string res;
				for(int k = 1; k <= n; k++){
					res += to_string(X[k]);
				}
				if(check(res)){
					cout << res << endl;
				}
			}
			else{
				Try(i + 1);
			}
			used[j] = false;
		}
	}
}

int main(){
	cin >> n;
	memset(used, false, sizeof(used));
	Try(1);
	return 0;
}*/

// to hop co tong bang X
/*int n, s, a[100], X[100];
bool check = false;
vector<vector<int>> v;
bool solve(string s){
	for(int i = 1; i < s.size(); i++){
		if(s[i] < s[i - 1]){
			return false;
		}
	}
	return true;
}


void Try(int i, int sum, string res){
	for(int j = 1; j <= n; j++){
		X[i] = a[j];
		sum += X[i];
		res += to_string(X[i]);
		if(sum == s){
			check = true;
			if(solve(res)){
				vector<int> tmp(X + 1, X + i + 1);
				v.push_back(tmp);
			}
		}
		else if (sum < s){
			Try(i + 1, sum, res);
		}
		sum -= X[i];
		res.pop_back();
	}
}


int main(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	string res = "";
	Try(1, 0, res);
	if(!check){
		cout << "-1" << endl;
		return 0;
	}
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << "{";
		for(int j = 0; j < v[i].size(); j++){
			cout << v[i][j];
			if(j == v[i].size() - 1){
				cout << "}";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
*/
// 
