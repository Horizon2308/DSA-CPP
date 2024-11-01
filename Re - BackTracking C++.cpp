#include <bits/stdc++.h>



using namespace std;

// B1

/*int n, X[1001];


void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			for(int k = 1; k <= n; k++){
				cout << X[k] << " ";
			}
			cout << endl;
		}
		else{
			Try(i + 1);
		}
	}
}


int main(){
	cin >> n;
	Try(1);
	return 0;
}*/

// To hop

/*int n, k, X[1001];

void Try(int i){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == n){
			for(int h = 1; h <= k; h++){
				cout << X[h];
			}
			cout << endl;
		}
		else{
			Try(i + 1);
		}
	}
}

int main(){
	cin >> n >> k;
	Try(1);
	return 0;
}*/

//Hoan vi

/*int n, X[101];
bool used[101];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			X[i] = j;
			used[j] = true;
			if(i == n){
				for(int i = 1; i <= n; i++){
					cout << X[i] << " ";
				}
				cout << endl;
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

// Tap hop co tong bang S

/*int n, k, s, X[101];
int cnt = 0;

void Try(int i, int sum){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		sum += X[i];
		if(i == k && sum == s){
			cnt++;
		}
		else if(i != k){
			Try(i + 1, sum);
		}
		sum -= X[i];
	}
}

int main(){
	cin >> n >> k >> s;
	Try(1, 0);
	cout << cnt << endl;
	return 0;
}*/

// Rat in maze 1

int n, X[101];
int a[101][101];

bool flag = false;

void Try(int i, int j, string s){
	if(i == n && j == n){
		cout << s << endl;
	}
	else{
		if(a[i + 1][j] == 1){
			s += 'D';
			a[i + 1][j] = 0;
			Try(i + 1, j, s);
			a[i + 1][j] = 1;
			s.pop_back();
		}
		if(a[i][j + 1] == 1){
			s += 'R';
			a[i][j + 1] = 0;
			Try(i, j + 1, s);
			a[i][j + 1] = 1;
			s.pop_back();
		}
	}
}


void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

int main(){
	nhap();
	//memset(used, false, sizeof(used));
	Try(1, 1, "");
	return 0;
}