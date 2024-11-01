#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	bool flag = false;
	sort(a, a + n);
	//Giong nhu bai two sum dung phuong phap 2 con tro. Nhung thay vao do minh co dinh 1 phan tu de cong
	for(int i = 0; i < n - 2; i++){
		int l = i + 1;
		int r = n - 1;
		while(l < r){
			if(a[i] + a[l] + a[r] == k){
				flag = true;
				break;
			}
			if(a[i] + a[l] + a[r] < k){
				++l;
			}
			else{
				--r;
			}
		}
	}
	if(!flag){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
	return 0;
}