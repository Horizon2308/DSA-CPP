#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct Thanhpho
{
	char name[50];
	float income;
	int popurlation;
	float literacyRate;
};

typedef struct Thanhpho tp;

void nhaptt(tp a[], int n)
{
	printf("\nNhap thong tin tung thanh pho :");
	for(int i=0; i<n; i++)
	{
		printf("\nNhap vao ten cua thanh pho :");
		fflush(stdin);
		gets(a[i].name);
		printf("\nNhap vao tong thu nhap cua thanh pho :");scanf("%f",&a[i].income);
		printf("\nNhap vao so dan cua thanh pho :");scanf("%d",&a[i].popurlation);
		printf("\nNhap vao ti le biet doc viet cua thanh pho :");scanf("%f",&a[i].literacyRate);
		printf("\n----------------------\n");
	}
}

void xuattt(tp a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\nTen cua thanh pho la : %s",a[i].name);
		printf("    Tong thu nhap cua thanh pho la : %.2f",a[i].income);
		printf("    Tong so dan cua thanh pho la : %d",a[i].popurlation);
		printf("    Ti le biet doc viet cua thanh pho la : %.2f",a[i].literacyRate);
		printf("\n----------------------\n");
	}
}

void check1(tp a[], int n)
{
	float maxincome=a[0].income;
	printf("\nThanh pho co tong thu nhap lon nhat la :");
	for(int i=0; i<n; i++)
	{
		if(a[i].income > maxincome)
		{
			maxincome=a[i].income;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(a[i].income == maxincome)
		{
			printf(a[i].name);
		}
	}
}

void check2(tp a[], int n)
{
	printf("\nTi le biet doc viet cao nhat la :");
	float maxliteracyRate = a[0].literacyRate;
	for(int i=0; i<n; i++)
	{
		if(a[i].literacyRate > maxliteracyRate)
		{
			maxliteracyRate= a[i].literacyRate;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(a[i].literacyRate == maxliteracyRate)
		{
			printf(a[i].name);
		}
	}
}

int main()
{
	int n;
	tp a[n];
	printf("Nhap vao so luong cac thanh pho :");
	scanf("%d",&n);
	//int *p=(int*)malloc(n * sizeof(int));
	nhaptt(a,n);
	xuattt(a,n);
	check1(a,n);
	check2(a,n);
	//free(p);
	return 0;
}