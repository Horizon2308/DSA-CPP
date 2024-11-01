#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[] = {13, 5, 9 ,4 , 3, 7, 8, 2, 0, 10};
	sort(a, a + 10);
	for(int x : a) {
		cout << x << " ";
	}
}