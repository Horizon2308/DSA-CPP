#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int flag;
	vector<int> current;
	vector<int> result;
	result.push_back(a[0]);
	for (int i = 1; i < n - 1; i++) {
		if (a[i] < a[i + 1]) {
			flag = a[i + 1];
			result.push_back(a[i + 1]);
		} else {
			flag = a[i + 1];
			result.clear();
			result.push_back(a[i + 1]);
		}
	}
	cout << "Max size: " << result.size() << endl;
	for (int x : result) {
		cout << x << " ";
	}
	return 0;
}