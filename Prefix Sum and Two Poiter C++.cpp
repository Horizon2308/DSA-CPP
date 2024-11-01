#include <bits/stdc++.h>
//partial_sum(first, last, result, binary_op)=>ham tinh mang cong don co san trong stl
//-result la container tra ve nhu vector.begin(), binary_op la dau
using namespace std;
//thu hoac ca rot
/*int a[1005][1005];
int prefix[1005][1005];
int n,m;
int main()
{
	cin>>n>>m;
	int a[n+1][m+1];
	int prefix[n+1][m+1];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
		}
	}
	int t;cin>>t;
	while(t--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>x2>>y1>>y2;
		cout<<prefix[x2][y2]-prefix[x1-1][y2]-prefix[x2][y1-1]+prefix[x1-1][y1-1]<<endl;
	}
	return 0;
}*/
//mang hieu
/*int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int D[n];
	for(int i=0; i<n; i++)
	{
		if(i==0)D[i]=a[i];
		else
		{
			D[i]=a[i]-a[i-1];
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<D[i]<<" ";
	}
	return 0;
}*/
//Update Operation
using ll=long long;
/*int main()
{
	int n,t;cin>>n>>t;
	int a[n+1];
	ll d[n+1];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		if(i==0)d[i]=a[i];
		else
		{
			d[i]=a[i]-a[i-1];
		}
	}
	while(t--)
	{
		int l,r,k;cin>>l>>r>>k;
		d[l]+=k;
		d[r+1]-=k;
	}
	for(int i=0; i<n; i++)
	{
		if(i==0)a[i]=d[i];
		else
		{
			a[i]=a[i-1]+d[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}*/
//pha tra sua
/*int main()
{
	int n,k,q;
	cin>>n>>k>>q;
	ll a[20005];
	ll d[20005];
	for(int i=0; i<20005; i++)
	{
		if(i==0)d[i]=a[i];
		else
		{
			d[i]=a[i]-a[i-1];
		}
	}
	while(n--)
	{
		int l,r;cin>>l>>r;
		--l;--r;
		d[l]+=1;
		d[r+1]-=1;
	}
	for(int i=0; i<20005; i++)
	{
		if(i==0)a[i]=d[i];
		else
		{
			a[i]=a[i-1]+d[i];
		}
	}
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		--l;--r;
		int cnt=0;
		for(int i=l; i<=r; i++)
		{
			if(a[i]>=k)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}*/
//prefixprefix
/*int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n+1];
	int d[n+1];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
}*/
//tron day
/*int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
	}
	int c[n+m];
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			cout<<a[i]<<" ";
			i++;
		}
		else
		{
			cout<<b[j]<<" ";
			j++;
		}
	}
	while(i<n)
	{
		cout<<a[i]<<" ";
		i++;
	}
	while(j<m)
	{
		cout<<b[j]<<" ";
		j++;
	}
	return 0;
}*/
//Number_Of_Equal
/*int main()
{
	int n,m;cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int j=0; j<m; j++)
	{
		cin>>b[j];
	}
	int cnt=0;
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(a[i]>b[j])
		{
			j++;
		}
		else if(a[i]==b[j])
		{
			j++;
			cnt++;
		}
		else
		{
			i++;
			j-=2;
		}
	}
	cout<<cnt<<endl;
	return 0;
}*/

//tong lon nhat
using ll=long long;

/*int mark[2000001]={0};
bool cmp(int a, int b)
{
	return mark[a] > mark[b];
}
int main()
{
	int n,q;cin>>n>>q;
	int a[n];
	int b[n];
	ll prefix[n+1];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		b[i]=i;
	}
	for(ll i=0; i<n; i++)
	{
		if(i==0)prefix[i]=a[i];
		else prefix[i]=prefix[i-1]+a[i];
	}
	int sum=0;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		--l;--r;
		for(int i=l; i<=r; i++)
		{
			mark[i]++;
		}
		sort(b,b+n,cmp);
//		sort(a,a+n,greater<int>());
		int tmp=0;
		for(int i=0; i<n; i++)
		{
			cout<<b[i]<<" ";
		}
	}
	return 0;
}*/

//number of equals
/*int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
	}
	int i=0,j=0;
	ll ans=0;
	while(i<n && j<m)
	{
		if(a[i] < b[j])
		{
			i++;
			continue;
		}
		else if(a[i] > b[j])
		{
			j++;
			continue;
		}
		int dem1=0,dem2=0;
		while(a[i]==b[j]&&i<n)
		{
			dem1++;i++;
		}
		int tmp=a[i-1];
		while(b[j]==a[i] && j<m)
		{
			dem2++;j++;
		}
		ans+=1ll * dem1 * dem2;
	}
	cout<<ans<<endl;
	return 0;
}*/

//mang hieu
/*int main()
{
	int n,t;cin>>n>>t;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int q[n+1];
	for(int i=0; i<n; i++)
	{
		if(i==0)q[i]==a[i];
		else q[i]=a[i]-a[i-1];
	}
	while(t--)
	{
		int l,r,k;cin>>l>>r>>k;
		q[l]+=k;
		q[r+1]-=k;
	}
	for(int i=0; i<n; i++)
	{
		if(i==0)a[i]=q[i];
		else a[i]=a[i-1]+q[i];
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}*/

//prefixprefix
/*int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int b[n];
	for(int i=0; i<n; i++)
	{
		b[i]=a[i];
	}
	int d[n+1];
	for(int i=0; i<n; i++)
	{
		if(i==0)d[i]=a[i];
		else d[i]=a[i]-a[i-1];
	}
	for(int i=m; i>0; i--)
	{
		int l,r,h;cin>>l>>r>>h;
		d[l]+=h;
		d[r+1]-=h;
	}
	
}*/
//phat qua noel 2
/*using ll=long long;
int main()
{
    int n,s;cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    int ans=INT_MAX;
    for(int i=0,j=0; j<n; j++)
    {
        sum+=a[j];
        while(sum > s)
        {
        	ans=min(ans,(j-i+1));
            sum-=a[i];
            i++;
            if(sum >= s)
            {
            	ans=min(ans,(j-i+1));
			}
        }
    }
    cout<<ans<<endl;
    return 0;
}*/

//segcount 1
using ll=long long;
/*int main()
{
	int n,s;cin>>n>>s;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int i=0,j=0;
	ll cnt=0;
	ll sum=0;
	while(i<n && j<n)
	{
		sum+=a[j];
		while(sum > s)
		{
			sum-=a[i];
			i++;
		}
		if(sum <= s)
		{
			cnt+=j-i+1;
		}
		j++;
	}
	cout<<cnt<<endl;
	return 0;
}*/

//segment count 2
/*using ll=long long;
int  main()
{
	int n,s;cin>>n>>s;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int i=0,j=0;
	ll sum=0;
	ll ans=0;
	while(i<n && j<n)
	{
		sum+=a[j];
		if(sum >= s)
		{
			ans+=(n-1)-j+1;
		}
		while(sum >= s)
		{
			sum-=a[i];
			i++;
			if(sum >= s)
			{
				ans+=(n-1)-j+1;
			}
		}
		j++;
	}
	cout<<ans<<endl;
	return 0;
}*/

//segment count 3
/*using ll=long long;
int main()
{
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int i=0,j=0;
	vector<int>v(n);
	ll ans=0;
	while(i<n && j<n)
	{
		se.insert(a[j]);
		if(se.size() < k)
		{
			ans+=j-i+1;
		}
		while(se.size()>=k)
		{
			i++;
			se.erase(se.begin());
			if(se.size() < k)
			{
				ans+=j-i+1;
			}
		}
		j++;
	}
	cout<<ans<<endl;
	return 0;
}*/

/*using ll=long long;

int main() {
    int n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll i=0,j=0;
    ll ans=0;
    ll maxval=INT_MIN;
    ll minval=INT_MAX;
    while(i<n&&j<n)
    {
        maxval=max(maxval,a[j]);
        minval=min(minval,a[j]);
        if(maxval-minval <= k)
        {
            ans+=j-i+1;
        }
        else
        {
            while(i<j)
            {
                i++;
                maxval=max(maxval,a[i]);
                minval=min(minval,a[i]);
                if(maxval-minval <= k)
                {
                    ans+=j-i+1;
                }
            }
        }
        j++;
    }
    cout<<ans<<endl;
    return 0;
}*/

//tong lon nhat
/*using ll=long long;
int main()
{
	int n,t;cin>>n>>t;
	int a[n+1];
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	int D[n+2]={0};
	while(t--)
	{
		int l,r;cin>>l>>r;
		D[l]+=1;
		D[r+1]-=1;
	}
	for(int i=1; i<=n; i++)
	{
		D[i]+=D[i-1];
	}
	sort(D+1,D+n+1,greater<int>());
	sort(a+1,a+n+1,greater<int>());
	ll ans=0;
	for(int i=1; i<=n; i++)
	{
		ans+=a[i]*D[i];
	}
	cout<<ans<<endl;
	return 0;
}*/

//prefixprefix
using ll=long long;
/*const int maxn=1e5+5;
ll a[maxn],l[maxn],r[maxn],D[maxn],query[maxn],val[maxn];
int n,m,k;

int main()
{
	cin>>n>>m>>k;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(int i=1; i<=m; i++)
	{
		cin>>l[i]>>r[i]>>val[i];
	}
	for(int i=1; i<=k; i++)
	{
		int x,y;cin>>x>>y;
		D[x]+=1;
		D[y+1]-=1;
	}
	for(int i=1; i<=m; i++)
	{
		D[i]+=D[i-1];
		query[l[i]]+=D[i]*val[i];
		query[r[i]+1]-=D[i]*val[i];
	}
	for(int i=1; i<=n; i++)
	{
		query[i]+=query[i-1];
		cout<<a[i]+query[i]<<" ";
	}
	return 0;
}*/
/*int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset<int> s(a, a + k);
    auto it = next(s.begin(), (k - 1) / 2);
    for(int i = k ; i < n; i++){
        cout << *it << " ";
        s.insert(a[i]);
        if(a[i] < *it) --it;
        if(a[i-k] <= *it) ++it;
        s.erase(s.lower_bound(a[i-k]));
    }
    cout << *it << " ";
    return 0;
}*/
/*int main(){
    string s;
    cin>>s;
    map<char,int> mp;
    for(char x:s){
        mp[x]++;
    }
    int l=0;
    int len=mp.size();
    int cnt=0;
    int dem[256]={0};
    int ans=INT_MAX;
    for(int i=0;i<s.length();i++){
        dem[s[i]]++;
        if(dem[s[i]]==1) ++cnt;
        if(cnt==len){
            while(dem[s[l]]>1){
                dem[s[l]]--;
                ++l;
            }
            ans=min(ans,i-l+1);
        }
    }
    cout<<ans<<endl;
    system("pause");
}*/

//segment count 4
/*using ll=long long;

int main() {
    int n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=0,j=0;
    ll ans=0;
    multiset<int>ms;
    for(int i=0,j=0; j<n; j++)
    {
    	ms.insert(a[j]);
		while(*ms.rbegin()-*ms.begin() > k && ms.size()!=0)
		{
			auto it=ms.find(a[i]);
			ms.erase(it);
			++i;
		}
		ans+=j-i+1;
	}
	cout<<ans<<endl;
    return 0;
}*/

//maximum window
/*int main()
{
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	multiset<int>ms;
	for(int i=0; i<k; i++)
	{
		ms.insert(a[i]);
	}
	cout<<*ms.begin()<<" "<<*ms.rbegin()<<endl;
	for(int i=k; i<n; i++)
	{
		auto it=ms.find(a[i-k]);
		ms.erase(it);
		ms.insert(a[i]);
		cout<<*ms.begin()<<" "<<*ms.rbegin()<<endl;
	}
	return 0;
}*/

//Sliding median
/*int main()
{
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	multiset<int>ms;
	for(int i=0; i<k; i++)
	{
		ms.insert(a[i]);
	}
	
}*/

//smallest window
using ll=long long;
/*int mark[10000001];
int main()
{
	string s;
	cin>>s;
	set<char>se(s.begin(),s.end());
	int k=se.size();
	int cnt=0;
	ll ans=-1;
	for(int i=0,j=0; j<s.size(); j++)
	{
		mark[s[j]]++;
		if(mark[s[j]]==1)cnt++;
		if(cnt==k)
		{
			ans=max(ans,1ll*j-i+1);
		}
		while(cnt==k)
		{
			mark[s[i]]--;
			if(mark[s[i]] < 1)cnt--;
			i++;
			if(cnt==k)
			{
				ans=max(ans,1ll*j-i+1);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}*/

//longest window
using ll=long long;
/*int mark[10000001];
int main()
{
	string s;cin>>s;
	set<char>se(s.begin(),s.end());
	ll ans=0;
	ll cnt=0;
	for(int i=0,j=0; j<s.size(); j++)
	{
		mark[s[j]]++;
		if(mark[s[j]]==1)cnt++;
		while(mark[s[j]]>1)
		{
			mark[s[i]]--;
			i++;
		}
		ans=max(ans,1ll*j-i+1);
	}
	cout<<ans<<endl;
	return 0;
}*/

//minimum window
using ll=long long;
/*int mark[10000001];
int dem[10000001];
int main()
{
	string s,t;cin>>s>>t;
	multiset<char>se(t.begin(),t.end());
	int k=se.size();
	for(int i=0; i<t.size(); i++)
	{
		dem[t[i]]++;
	}
	int idx=-1;
	ll cnt=0;
	ll ans=INT_MAX;
	for(int i=0,j=0; j<s.size(); j++)
	{
		mark[s[j]]++;
		if(mark[s[j]]<=dem[s[j]])cnt++;
		if(cnt==k)
		{
			while(mark[s[i]] > dem[s[i]] || dem[s[i]]==0)
			{
				if(mark[s[i]] > dem[s[i]])
				{
					mark[s[i]]--;
				}
				i++;
			}
			if(j-i+1 < ans)
			{
				ans=j-i+1;
				idx=i;
			}
	    }
	}
	if(idx==-1)
	{
		cout<<"-1"<<endl;
	}
	else cout<<s.substr(idx,ans);
	return 0;
}*/

//minimum subarray
using ll=long long;

/*int main()
{
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	ll sum=0;
	ll ans=INT_MAX;
	ll cnt=0;
	int idx=-1;
	for(int i=0,j=0; j<n; j++)
	{
		sum+=a[j];
		if(sum >= k)
		{
			if(j-i+1 < ans)
			{
				ans=j-i+1;
				idx=i;
			}
		}
		while(sum > k && i<j)
		{
			sum-=a[i];
			i++;
			if(sum >= k)
			{
				if(j-i+1 < ans)
				{
					ans=j-i+1;
					idx=i;
				}
			}
		}
	}
	if(idx==-1)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for(int i=idx; i<=ans; i++)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}*/