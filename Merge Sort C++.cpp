#include <bits/stdc++.h>
using namespace std;


void merge(int a[], int l, int m, int r){
	vector<int> v1(a + l, a + m + 1);
	vector<int> v2(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	while(i < v1.size() && j < v2.size()){
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
}