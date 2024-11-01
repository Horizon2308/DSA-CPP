#include <bits/stdc++.h>

using namespace std;

/*
int n, X[100];
bool used[100];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == false){
			X[i] = j;
			used[j] = true;
			if(i == n){
				for(int k = 1; k <= n; k++){
					cout << X[k];
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
	memset(used , false , sizeof(used));
	Try(1);
	return 0;
}*/

// xau AB
/*int n;
int a[10];
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n - 1){
	        for(int k = 0; k < n; k++){
	            if(a[k] == 0) cout << "B";
	            else cout << "A";
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
    Try(0);
    return 0;
}*/

// sinh to hop
/*int n, k;
int X[16];

void Try(int i){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
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

// sinh hoan vi
int n;
bool used[100];
int X[100];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == false){
			X[i] = j;
			used[j] = true;
			if(i == n){
				for(int k = 1; k <= n; k++){
					cout << X[k];
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
}