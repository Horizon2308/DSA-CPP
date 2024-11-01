#include <bits/stdc++.h>

using namespace std;

/*int main()
{
	int n;cin >> n;
	int a[n];
	map<int, int>mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	int x;cin>>x;
	for(int i=0; i<n; i++)
	{
		if(mp[x]==1)
		{
			cout<<"YES"<<endl;
			break;
		}
		else
		{
			cout<<"NO"<<endl;
			break;
		}
	}
	return 0;
}*/

/*int main()
{
	int n;cin>>n;
	int m;cin>>m;
	int a[n];
	int b[m];
	set<int>s;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
		s.insert(b[i]);
	}
	bool ok=false;
	for(int i=0; i<n; i++)
	{
		if(s.count(a[i])==0)
		{
			cout<<a[i]<<" ";
			ok=true;
		}
	}
	if(ok==false)
	{
		cout<<"NOT FOUND !"<<endl;
	}
	return 0;
}*/
//so xuat hien nhieu nhat trong mang neu bang nhau in ra so nho nhat
/*int main()
{
	int n;
	cin>>n;
	int a[n];
	map<int,int>mp;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	int max=INT_MIN;
	int res=0;
	for(pair<int,int>p : mp)
	{
		if(p.second > max)
		{
			max=p.second;
			res=p.first;
		}
	}
	for(pair<int,int>p : mp)
	{
		if(p.second == max && p.first < res)
		{
			max=p.second;
			res=p.first;
		}
	}
	cout<<res<<" "<<max<<endl;
	return 0;
}*/
//ki tu xuat hien nhieu nhat trong day
/*int main()
{
	string s;
	getline(cin,s);
	map<char,int>mp;
	for(int i=0; i<s.length(); i++)
	{
		mp[s[i]]++;
	}
	int max=INT_MIN;
	char c;
	for(pair<char,int>p : mp)
	{
		if(p.second > max)
		{
			max=p.second;
			c=p.first;
		}
	}
	cout<<c<<endl;
	return 0;
}*/
//xau pangram
/*int main()
{
	string s;
	getline(cin,s);
	set<char>se;
	for(int i=0; i<s.size(); i++)
	{
		se.insert(tolower(s[i]));
	}
	cout<<se.size()<<endl;
	if(se.size()==26)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}*/
//so luong tu khac nhau trong xau
/*int main()
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	set<string>se;
	while(ss>>token)
	{
		se.insert(token);
	}
	cout<<se.size()<<endl;
}*/
// tu xuat hien nhieu nhat trong xau neu bang nhau in ra tu co tt tu dien nho hon
/*int main()
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	map<string,int>mp;
	while(ss>>token)
	{
		mp[token]++;
	}
	int max=INT_MIN;
	string res;
	for(pair<string,int>p : mp)
	{
		if(p.second > max)
		{
			max=p.second;
			res=p.first;
		}
	}
	for(pair<string,int>p : mp)
	{
		if(p.second == max && p.first < res)
		{
			max=p.second;
			res=p.first;
		}
	}
	cout<<res<<endl;
}*/
//tu lap dau tien trong xau
/*int main()
{
	string s;
	getline(cin,s);
	string token;
	map<string,int>mp;
	stringstream ss(s);
	while(ss>>token)
	{
		mp[token]++;
	}
	for(pair<string,int>p : mp)
	{
		if(p.second > 1)
		{
			cout<<p.first<<endl;
			break;
		}
	}
	return 0;
}*/

/*int main()
{
	int t;cin>>t;
	cin.ignore();
	map<string,int>mp;
	while(t--)
	{
		string s;
		getline(cin,s);
		if(mp.find(s)==mp.end())
		{
			cout<<s<<endl;
		}
		else
		{
			cout<<s<<mp[s]<<endl;
		}
		mp[s]++;
	}
	return 0;
}*/

/*int main()
{
	int n;cin>>n;
	int a[n];
	multiset<int>s;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	int t;cin>>t;
	while(t--)
	{
		int c;cin>>c;
		if(c==1)
		{
			int x;cin>>x;
			s.insert(x);	
		}
		else if(c==2)
		{
			int y;cin>>y;
			if(s.find(y)!=s.end())
			{
				s.erase(y);
				break;
			}
			else return 0;
		}
		else if(c==3)
		{
			int z;cin>>z;
			if(s.find(z)!=s.end())cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}*/
//tim hop va giao cua mang su dung set&map
/*int main()
{
	int n,m;cin>>n>>m;
	int a[n];
	int b[m];
	int c[max(n,m)];
	int d[n+m];
	multiset
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		
	}
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
	}
}*/
//remake
/*int mark[1000000]={0};

int main()
{
	int n,m;cin>>n>>m;
	int a[n];
	int b[m];
	int c[max(n,m)];
	set<int>s;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
	}
    int k=0;
	for(int i=0; i<m; i++)
	{
		if(s.find(b[i])!=s.end())
		{
			c[k++]=b[i];
		}
	}
	sort(c,c+k);
	for(int i=0; i<k; i++)
	{
		if(mark[c[i]]==0)
		{
			cout<<c[i]<<" ";
			mark[c[i]]=1;
		}
	}
	cout<<endl;
	for(int i=0; i<m; i++)
	{
		s.insert(b[i]);
	}
	for(auto x : s)
	{
		cout<<x<<" ";
	}
	return 0;
}*/

/*int mark[10000000]={0};

int main() {
    int n,m;cin>>n>>m;
    int a[n];
    int b[m];
    int c[max(n,m)];
    set<int>s;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
        s.insert(b[i]);
    }
    int k=0;
    for(int i=0; i<n; i++)
    {
        if(s.find(a[i])==s.end())
        {
            c[k++]=a[i];
        }
    }
    sort(c,c+k);
    for(int i=0; i<k; i++)
    {
        if(mark[c[i]]==0)
        {
            cout<<c[i]<<" ";
            mark[c[i]]=1;
        }
    }
    return 0;
}*/
//
/*int main()
{
	int n;cin>>n;
	int a[n];
	set<int>s;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int t;cin>>t;
	while(t--)
	{
		int l;cin>>l;
		for(int i=l; i<n; i++)
		{
			s.insert(a[i]);
		}
		cout<<s.size()<<endl;
		s.clear();
	}
	return 0;
}*/

//Intersection
/*int main()
{
	int n,m;cin>>n>>m;
	int a[n],b[m];
	set<int>se;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
		se.insert(b[i]);
	}
	for(int i=0; i<n; i++)
	{
		if(se.find(a[i])!=se.end())
		{
			cout<<a[i]<<" ";
			se.erase(a[i]);
		}
	}
	return 0;
}*/
//Suffix And Query (tong tien to dem)
/*int suffix[1000000];
int main()
{
	int n;cin>>n;
	int a[n];
	set<int>se;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=n-1; i>=0 ; i--)
	{
		se.insert(a[i]);
		suffix[i]=se.size();
	}
	int t;cin>>t;
	while(t--)
	{
		int l;cin>>l;
		cout<<suffix[l]<<endl;
	}
	return 0;
}*/
//Symmetric difference
/*int main()
{
	int n,m;cin>>n>>m;
	int a[n],b[m];
	int c[min(n,m)];
	//int d[n+m];
	set<int>se;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
		se.insert(b[i]);
	}
	int g=0;
	for(int i=0; i<n; i++)
	{
		if(se.find(a[i])!=se.end())
		{
			c[g++]=a[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		se.insert(a[i]);
	}
	for(int i=0; i<g; i++)
	{
		if(se.find(c[i]) != se.end())
		{
			se.erase(c[i]);
		}
	}
	for(auto x : se)
	{
		cout<<x<<" ";
	}
	return 0;
}*/
//tong tien to vs map
/*int prefix[1000000];
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		if(i==0)prefix[0]=a[0];
		else
		{
			prefix[i]=prefix[i-1]+a[i];
		}
	}
	multimap<int,int>mp;
	for(int i=0; i<n; i++)
	{
		mp[a[i]]=i;
	}
	int ans=0;
	int r=prefix[mp[a[n-1]]];
	for(int i=0; i<n-1; i++)
	{
		if(r-prefix[mp[a[i]]]==prefix[mp[a[i]]])
		++ans;
	}
	cout<<ans<<endl;
	return 0;
}*/

//day dep su dung map
/*int solve(map<int,int>cnt)
{
	if(cnt.size()==1)return 1;
	if(cnt.size()>2)return 0;
	auto it1=cnt.begin();
	auto it2=cnt.begin();
	it2++;
	if((*it1).second==1)
	{
		if((*it1).first-(*it2).first==1 || (*it1).first==1)return 1;
	}
	if((*it2).second==1)
	{
		if((*it2).first-(*it1).first==1 || (*it2).first==1)return 1;
	}
	return 0;
}

int main()
{
	int n;cin>>n;
	int a[n];
	map<int,int>mp;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	map<int,int>cnt;
	for(auto x : mp)
	{
		cnt[mp[x.second]]++;
	}
	if(solve(cnt))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

/*int digitNumbers(int n)
{
    int l=INT_MAX;
    while(n)
    {
        int r=n%10;
        n/=10;
        if(l<r)return 0;
        l=r;
    }
    return 1;
}
bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(a.second!=b.second)return a.second>b.second;
    else return a.first < b.first;
}
int main()
{
    int n=0;
    int tmp=0;
    int a[100001];
    int b[100001];
    while(cin>>tmp)
    {
        a[n]=tmp;
        n++;
    }
    int k=0;
    for(int i=0; i<n; i++)
    {
        if(digitNumbers(a[i]))
        {
            b[k++]=a[i];
        }
    }
    pair<int,int>p[k];
    map<int,int>mp;
    int pi=0;
    for(int i=0; i<k; i++)
    {
        mp[b[i]]++;
    }
    for(auto x : mp)
    {
    	p[pi].first=x.first;
        p[pi].second=x.second;
        pi++;
	}
    sort(p,p+pi,cmp);
    for(int i=0; i<pi; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}*/

//day so uu the
int main()
{
    int n=0;
    int tmp=0;
    int a[1000000];
    multiset<int>s;
    multiset<int>se;
    while(cin>>tmp)
    {
        a[n]=tmp;
        if(a[n]%2==0)
        {
            s.insert(a[n]);
        }
        else
        {
            se.insert(a[n]);
        }
        n++;
    }
    int x=s.size();
    int y=se.size();
    if((n%2==0 && x > y) || (n%2!=0 && y > x))
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}
