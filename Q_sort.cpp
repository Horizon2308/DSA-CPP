#include <bits/stdc++.h>

using namespace std;

void q_sort(int l, int r, int a[]) {
	if(l > r) {
		return;
	}
	int m = (l + r) / 2;
	int i = l, j = r;
	while(i <= j) {
		while(a[i] < a[m]){
			i++;
		}
		while(a[j] > a[m]) {
			j--;
		}
		if (i <= j) {
			swap(a[i], a[j]);
			i++; j--;
		}
	}
	if (l < j) {
		q_sort(l, j, a);
	}
	if (i < r) {
		q_sort(i, r, a);
	}
}

int main() {
	int a[] = {13, 5, 9 ,4 , 3, 7, 8, 2, 0, 10};
	q_sort(0, 9, a);
	for (int x : a) {
		cout << x << " ";
	}
}
nhap vao mang n so thuc in mang ra man hinh
q sort hien thi mang ra man hinh
2. dinh nghia kieu du lieu sinh vien ma sinh vien kieu va lop 
nhap vao mang sinh vien n phan tu hien thi ra man hinh, viet ham qsort sap xep mang vua nhap theo diem tong ket hien thi amgnwa w
aewu'p'