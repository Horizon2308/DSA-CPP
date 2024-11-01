#include <stdio.h>
#include <math.h>

/*int min(int x, int y)
{
	return x<y ? x : y;
}
int max(int x, int y)
{
	return x>y ? x:y;
}*/
void nhap(int a[], int n)
{
	printf("Nhap gia tri tung phan tu :\n");
	for(int i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[], int n)
{
	printf("\nDay so da nhap :");
	for(int i=0; i<n; i++)
	{
		printf("%2d",a[i]);
	}
}

//bai toan lineland

/*int check(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(i==0)printf("\n%d %d",a[1]-a[0],a[n-1]-a[0]);
		else if(i==n-1)printf("\n%d %d",a[n-1]-a[n-2],a[n-1]-a[0]);
		else printf("\n%d %d",min(a[i]-a[i-1],a[i+1]-a[i]),max(a[i]-a[0],a[n-1]-a[i]));
	}
	return 0;
}*/
int check(int a[], int n)
{
	int c25=0, c50=0;
	for(int i=0; i<n; i++)
	{
	if(a[i]==25)
	{
		++c25;
	}
	else if(a[i]==50)
	{
		if(c25!=0)
		{
			--c25;
			++c50;
		}
		else
		{
			return 0;
		}
	}
	else if(a[i]==100)
	{
		if(c25==0 || c25*25+c50*50 < 75)return 0;
		else if(c25!=0 && c50!=0)
		{
			--c25;
			--c50;
		}
		else if(c25!=0 && c50==0)
		{
			c25-=3;
		}
	}
}
    return 1;
}
int main()
{
	int n;
	printf("Nhap so luong phan tu cua mang :");
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	xuat(a,n);
	//printf("\nChi phi nho nhat va lon nhat de gui thu qua cac thanh pho la :");
	//check(a,n);
	printf("\nNguoi nhan nhien co the thanh toan het hoa don hay khong :");
	if(check(a,n))printf("\nYES");
	else printf("\nNO");
	return 0;
}