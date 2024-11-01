#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int nt(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)return 0;
    }
    return n>1;
}
int mark1[10000]={0};
int mark2[10000];
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
    	cin>>a[i];
    	mark2[a[i]]++;
	}
    for(int i=0; i<n; i++)
    {
    	if(nt(a[i]) && mark1[a[i]]==0)
    	{
    		cout<<a[i]<<" "<<mark2[a[i]]<<endl;
    		mark1[a[i]]=1;
		}
	}
    return 0;
}