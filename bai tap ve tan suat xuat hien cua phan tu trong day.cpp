#include <stdio.h>

/*int min(int x, int y)
{
	return x<y ? x:y;
}*/
int cnt[10000]={0};
int main()
{
	int n;
	printf("Nhap vao so luong phan tu :");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	/*int mark[100001]={0};
	for(int i=0; i<n; i++)
	{
		if(mark[a[i]] == 0)
		{
			printf("%2d",a[i]);
			mark[a[i]]=1;
		}
	}*/
    printf("\nCac phan tu xuat hien 1 lan la :");
    for(int i=0; i<n; i++)
    {
    	int ok=1;
    	for(int j=0;j<i;j++)
    	{
    		if(a[i]==a[j])
    		{
    			ok=0;
    			break;
			}
		}
	    if(ok==1) printf("%d",a[i]);
	}
	/*for(int i=0; i<n; i++)
	{
		cnt[a[i]]++;
	}
	int res,dem=0;
	for(int i=0; i<n; i++)
	{
		if(cnt[a[i]]>dem)
		{
			dem=cnt[a[i]];
			res=a[i];
		}
		else if(cnt[a[i]] == dem)
		{
			if(res>a[i])
			{
				res=a[i];
			}
		}	
	}
	printf("\nSo xuat hien nhieu nhat la %d va so lan xuat hien la %d",res,dem);*/
}