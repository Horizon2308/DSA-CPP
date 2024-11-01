#include <bits/stdc++.h>

using namespace std;

void insertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}

void selectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[minIndex]) {
				minIndex = j;
			}
		}
		swap(a[minIndex], a[i]);
	}
}

void bubbleSort(int a[], int n) {
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if(a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubbleSort(a, n);
	for (int x : a) {
		cout << x << " ";
	}
	return 0;
}