#include <stdio.h>

int main()
{
	int t;
	printf("Nhap vao so luong bo test :");
	scanf("%d",&t);
	for(int i=1; i<=t; i++)
	{
		int n;
		int a[n];
		printf("\nNhap vao so luong phan tu trong bo test :");
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
	}
}