#include <bits/stdc++.h>

using namespace std;
//so nguyen to co tat ca cac chu so la so nguyen to
/*int prime[1000000];

void solve()
{
	for(int i=0; i<1000000; i++)
	{
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2; i<1000; i++)
	{
		if(prime[i]==1)
		{
			for(int j=i*i; j<1000000; j+=i)
			{
				prime[j]=0;
			}
		}
	}
}

int digitNumber(int n)
{
	while(n)
	{
		int r=n%10;
		if(r!=2 && r!=3 && r!=5 && r!=7)
		{
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main()
{
	solve();
	int t;cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		//a--;b--;
		int cnt=0;
		for(int i=a; i<=b; i++)
		{
			if(prime[i] && digitNumber(i))
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}*/
//cap so nguyen to cung nhau co tong bang n
/*int prime[10001];
void sieve()
{
	for(int i=0; i<10000; i++)
	{
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2; i<100; i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<10000; j+=i)
			{
				prime[j]=0;
			}
		}
	}
}

int main()
{
	sieve();
	int n;cin>>n;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(prime[i]&&prime[n-i])
		{
			cout<<i<<" "<<n-i<<endl;
		}
	}
	return 0;
}*/
//so thuan nguyen to
/*int prime[1000000];

void sieve()
{
	for(int i=0; i<1000000; i++)
	{
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2; i<1000; i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<1000000; j+=i)
			{
				prime[j]=0;
			}
		}
	}
}

int digitNumber(int n)
{
	while(n)
	{
		int r=n%10;
		if(r!= 3 && r!=5 && r!=2 && r!=7)
		{
			return 0;
		}
		n/=10;
	}
	return 1;
}

int digitSum(int n)
{
	int sum=0;
	while(n)
	{
		int r=n%10;
		sum+=r;
		n/=10;
	}
	if(prime[sum]){
		return 1;
	}
	return 0;
}

int main()
{
	sieve();
	int a,b;cin>>a>>b;
	int cnt=0;
	for(int i=a; i<=b; i++)
	{
		if(prime[i]&&digitNumber(i)&&digitSum(i))
	    {
		   cnt++;
	    }
	}
	cout<<cnt<<endl;
	return 0;
}*/
//so co dung 3 uoc so
/*int prime[100001];
void sieve()
{
	for(int i=0; i<=100000; i++)
	{
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2; i<=sqrt(100000); i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<=100000; j+=i)
			{
				prime[j]=0;
			}
		}
	}
}
int main()
{
	sieve();
	int n;cin>>n;
	for(int i=1; i<=sqrt(n); i++)
	{
		if(prime[i])
		{
			cout<<i*i<<" ";
		}
	}
	return 0;
}*/
//so co uoc la prime nho nhat nho hon n
/*int find(int n)
{
	for(int i=2; i<sqrt(n); i++)
	{
		if(n%i==0)return i;
	}
	return n;
}

int main()
{
	int n;cin>>n;
	for(int i=1; i<=n; i++)
	{
		cout<<find(i)<<endl;
	}
	return 0;
}*/
//sang so nguyen to bien doi su dung trong bai co uoc nho nhat

/*int prime[100001];
void sieve()
{
	for(int i=0; i<=100000; i++)
	{
		prime[i]=i;
	}
	for(int i=2; i<=sqrt(100000); i++)
	{
		if(prime[i]==i)
		{
			for(int j=i*i; j<=100000; j+=i)
			{
				prime[j]=i;
			}
		}
	}
}

int main()
{
	sieve();
	int n;cin>>n;
	for(int i=1; i<=n; i++)
	{
		cout<<prime[i]<<endl;
	}
	return 0;
}*/
//phan tich thua so nguyen to su dung sang so nguyen to bien doi
/*int prime[100001];


void sieve()
{
	for(int i=0; i<100000; i++)
	{
		prime[i]=i;
	}
	for(int i=2; i<=sqrt(100000); i++)
	{
		if(prime[i]==i)
		{
			for(int j=i*i; j<=100000; j+=i)
			{
				if(prime[j]==j)prime[j]=i;
			}
		}
	}
}

void solve(int n)
{
	while(n!=1)
	{
		int cnt=0;
		int temp=prime[n];
		while(n%temp==0)
		{
			++cnt;
			n/=temp;
		}
		cout<<temp<<'^'<<cnt<<'*';
	}
}
int main()
{
	sieve();
	int n;cin>>n;
	solve(n);
	return 0;
}*/
//bac cua thua so nguyen to trong n! (basic solve)
/*int solve(int n,int p)
{
	int ans=0;
	for(int i=p; i<=n; i+=p)
	{
		int tmp=i;
		while(tmp%p==0)
		{
			++ans;
			tmp/=p;
		}
	}
	return ans;
}
int main()
{
	int n,p;cin>>n>>p;
	cout<<solve(n,p)<<endl;
	return 0;
}*/
// bac cua thua so nguyen to trong n! (legendre solve)

/*int legendre(int n, int p)
{
	int ans=0;
	for(int i=p; i<=n; i*=p)
	{
		ans+=n/i;
	}
	return ans;
}

int main()
{
	int n,p;cin>>n>>p;
	cout<<legendre(n,p)<<endl;
	return 0;
}*/
// dem cac chu so 0 cuoi cung cua n!
/*int basic(int n)
{
	int ans=0;
	for(int i=5; i<=n; i+=5)
	{
		int temp=i;
		while(temp%5==0)
		{
			++ans;
			temp/=5;
		}
	}
	return ans;
}
int main()
{
	int n;cin>>n;
	cout<<basic(n)<<endl;
	return 0;
}*/


//phan tich thua so nguyen to su dung sang so nguyen to bien doi

/*int prime[10000001];

void sieve()
{
	for(int i=0; i<=10000000; i++)
	{
		prime[i]=i;
	}
	for(int i=2; i<=sqrt(10000000); i++)
	{
		if(prime[i]==i)
		{
			for(int j=i*i; j<=10000000; j+=i)
			{
				if(prime[j]==j)
				{
					prime[j]=i;
				}
			}
		}
	}
}
void pt(int n)
{
	while(n!=1)
	{
		int temp=prime[n];
		while(n%temp==0)
		{
			cout<<temp<<" ";
			n/=temp;
		}
	}
}

int main()
{
	sieve();
	int n;cin>>n;
	pt(n);
	return 0;
}*/

//so sphenic
/*int prime(int n)
{
	int res=0;
	for(int i=2; i<=sqrt(n); i++)
	{
		int cnt=0;
		while(n%i==0)
		{
			++cnt;
			n/=i;
		}
		if(cnt>=2) return 0;
		if(cnt==1) ++res;
	}
	if(n!=1)++res;
	return res==3;
}

int main()
{
	int n;cin>>n;
    cout<<prime(n)<<endl;
	return 0;
}*/
//so smith
/*int nt(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int prime[10000001];
void sieve()
{
	for(int i=0; i<=10000000; i++)
	{
		prime[i]=i;
	}
	for(int i=2; i<=sqrt(10000000); i++)
	{
		if(prime[i]==i)
		{
			for(int j=i*i; j<=10000000; j+=i)
			{
				if(prime[j]==j)
				{
					prime[j]=i;
				}
			}
		}
	}
}

int solve2(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int solve1(int n)
{
	int sum=0;
	while(n!=1)
	{
		int tmp=prime[n];
		while(n%tmp==0)
		{
			sum+=solve2(tmp);
			n/=tmp;
		}
	}
	return sum;
}



int main()
{
	sieve();
	int n;cin>>n;
	if(!nt(n) && (solve1(n)==solve2(n)))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}*/
//so smith remake
/*int nt(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}

int solve(int n)
{
	int ans=0;
	while(n)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}

int smith(int n)
{
	int sum1=solve(n);
	int sum2=0;
	for(int i=2; i<=sqrt(n); i++)
	{
		while(n%i==0)
		{
			sum2+=solve(i);
			n/=i;
		}
	}
	if(n!=1) sum2+=solve(n);
	return sum1==sum2;
}

int main()
{
	int n;cin>>n;
	if(!nt(n) && smith(n))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}*/

//uoc nguyen to nho nhat
/*int nt(int n)
{
	int max=-1e7;
	for(int i=2; i<=sqrt(n); i++)
	{
		while(n%i==0)
		{
			if(i>=max)
			{
				max=i;
			}
			n/=i;
		}
	}
	if(n!=1&&n>=max)max=n;
	return max;
}


int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		cout<<nt(n)<<endl;
	}
	return 0;
}*/
// so dep la so chia het cho 1 so nt va binh phuong cua so do

/*int prime[1000001];
void sieve()
{
	for(int i=0; i<=1000000; i++)
	{
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2; i<=sqrt(1000000); i++)
	{
		if(prime[i]=1)
		{
			for(int j=i*i; j<=1000000; j+=i)
			{
				prime[j]=0;
			}
		}
	}
}

int numbersPefect(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0 && n%(i*i)==0 && prime[i] && prime[i*i])
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	sieve();
	int a,b;cin>>a>>b;
	for(int i=a; i<=b; i++)
	{
		if(numbersPefect(i))cout<<i<<" ";
	}
	return 0;
}*/
//so chinh phuong
using ll = long long;
/*int scp(ll n)
{
	int can=sqrt(n);
	if(1ll*can*can==n)return 1;
	return 0;
}

int main()
{
	ll n;cin>>n;
	if(scp(n))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}*/
//tim so chinh phuong trong doan
/*int main()
{
	int a,b;cin>>a>>b;
	int c1=sqrt(a),c2=sqrt(b);
	if(c1*c1!=a) ++c1;
	for(int i=c1; i<=c2; i++)
	{
		cout<<i*i<<" ";
	}
	return 0;
}*/
//tong uoc cua 1 so nguyen

/*int sumuoc(int n)
{
	int sum=0;
	for(int i=1; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			if(i!=n/i)
			{
				sum+=i+(n/i);
			}
		}
	}
	return sum;
}
int main()
{
	int n;cin>>n;
	cout<<sumuoc(n)<<endl;
	return 0;
}*/
/*int sumuoc(int n)
{
	int sum=0;
	for(int i=1; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			if(i==1)
			{
				sum+=1;
			}
			else if(i==n/i) sum+=i;
			else sum+=i+n/i;
		}
	}
	return sum;
}
int main()
{
	int n;cin>>n;
	if(sumuoc(n)==n)cout<<"YES";
	else cout<<"NO";
	return 0;
}*/

//so loc phat
/*int solve(int n)
{
	while(n)
	{
		int r=n%10;
		if(r!=0 && r !=6 && r!=8)
		{
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main()
{
	int n;
	cin>>n;
	cout<<solve(n)<<end;
	return 0;
}*/

//so thuan nghich
/*int solve1(int n)
{
	int res=0,tmp=n;
	while(n)
	{
		res=res*10+ n%10;
		n/=10;
	}
	return res==tmp;
}

int solve2(int n)
{
	int ans=0;
	for(int i=2; i<=sqrt(n); i++)
	{
		int cnt=0;
		while(n%i==0)
		{
			++cnt;
			n/=i;
		}
		if(cnt>=1)++ans;
	}
	if(n!=1)++ans;
	return ans>=3;
}

int main()
{
	int a,b;cin>>a>>b;
	bool ok=false;
	for(int i=a; i<=b; i++)
	{
		if(solve1(i)&&solve2(i))
		{
			cout<<i<<" ";
			ok=true;
		}
	}
	if(ok==false)cout<<"-1"<<endl;
	return 0;
}*/

//so thuan nghich loc phat
/*using ll=long long;

int tn(int n)//so thuan nghich
{
	int tmp=n,rev=0;
	while(n)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	return rev==tmp;
}

int solve1(int n)
{
	while(n)
	{
		int r=n%10;
		if(r==6)return 1;
		n/=10;
	}
	return 0;
}

ll solve2(int n)
{
	ll sum=0;
	while(n)
	{
		int r=n%10;
		sum+=r;
		n/=10;
	}
	return sum;
}

int solve3(int n)
{
	ll sum= solve2(n);
	int r=sum%10;
	if(r==8)return 1;
	return 0;
}

int main()
{
	int a,b;cin>>a>>b;
	for(int i=a; i<=b; i++)
	{
		if(tn(i) && solve1(i) && solve2(i) && solve3(i))
		{
			cout<<i<<" ";
		}
	}
	return 0;
}*/

//so nguyen to <= n va co chu so cuoi cung la lon nhat
/*int nt(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)return 0;
	}
	return n>1;
}

int solve(int n)
{
	int max=INT_MIN;
	int r1=n%10;
	n/=10;
	while(n)
	{
		int r2=n%10;
		if(r2>=max)
		{
			max=r2;
		}
		n/=10;
	}
	return r1>=max;
}

int main()
{
	int n;cin>>n;
	int cnt=0;
	for(int i=2; i<=n; i++)
	{
		if(nt(i) && solve(i))
		{
			cout<<i<<" ";
			cnt++;
		}
	}
	cout<<endl;
	cout<<cnt<<endl;
	return 0;
}*/
//luy thua nhi phan remake
using ll=long long;
/*ll bitpow(ll a, ll b)
{
	ll res=1;
	while(b)
	{
		if(b%2==1)
		{
			res*=a;
		}
		b/=2;
		a*=a;
	}
	return res;
}

int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<bitpow(a,b)<<endl;
	return 0;
}*/
//chia du modulo => khi can phan chia du cho tap cac so lon nhat
/*int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	ll sum=0;
	ll MOD=10e9+7;
	for(int i=0; i<n; i++)
	{
		sum*=a[i];
		sum%=MOD;
	}
	cout<<sum%MOD<<endl;
	return 0;
}*/
//sang so nguyen to tren doan
//a[l-r+1]
//bool prime[1000001];
/*void sieve(int l, int r)
{
	vector<bool>prime(r-l+1,true);
	for(int i=2; i<=sqrt(r); i++)
	{
		for(int j=max(i*i,l+i-1/i * i); j<=r; j+=i)
		{
			prime[j-l]=false;
		}
	}
	for(int i=max(2,l); i<=r; i++)
	{
		if(prime[i-l])
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
//	int n;cin>>n;
//	int a[n];
//	for(int i=0; i<n; i++)
//	{
//		cin>>a[i];
//	}
	int l,r;cin>>l>>r;
	sieve(l,r);
	return 0;
}*/
//dem cac so co dung 3 uoc so khong vuot qua n

/*using ll=long long;
const int maxn=1e6;
bool prime[maxn+1];
void sieve()
{
	for(int i=0; i<=maxn; i++)
    {
	    prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for(int i=2; i<=sqrt(maxn); i++)
    {
    	if(prime[i])
    	{
    		for(int j=i*i; j<=maxn; j+=i)
    		{
    			prime[j]=false;
			}
		}
	}
}

int main()
{
	sieve();
	ll n;cin>>n;
	int cnt=0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(prime[i])
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}*/

//dem uoc cua 1 so nguyen
/*const ll MOD=1e9+7;
using ll= long long;
int main()
{
	int t;cin>>t;
	ll ans=1;
	while(t--)
	{
		int p,e;cin>>p>>e;
		ans*=e+1;
		ans%=MOD;
	}
	cout<<ans%MOD<<endl;
	return 0;
}*/

//phan tich thua so nguyen to theo mau
using ll=long long;
/*void pt(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i==0)
			{
				cnt++;
				n/=i;
			}
			cout<<i<<"^"<<cnt<<" ";
			if(n!=1)cout<<"*"<<" ";
		}
	}
	if(n!=1)cout<<n<<"^1";
}

int main()
{
	ll n;
	cin>>n;
	pt(n);
	return 0;
}*/
//phi ham euler so nguyen to cung nhau
//phi(n)=n-n/p => voi p la cac so nguyen to cua n (unique)
using ll=long long;
/*ll gcd(ll a, ll b)
{
	if(b==0)return a;
	else return gcd(b,a%b);
}

ll phi(ll n)
{
	ll res=n;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			while(n%i==0)n/=i;
			res-=res/i;
		}
	}
	if(n!=1)res-=res/n;
	return res;
}
int main()
{
	ll n;cin>>n;
	cout<<phi(n)<<endl;
	return 0;
}*/

//thua so nguyen to thu k
using ll=long long;

/*int solve(int n,int k)
{
	int cnt=0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				cnt++;
				n/=i;
				if(cnt==k)
				{
					return i;
				}
			}
		}
	}
	if(n!=1)
	{
		cnt++;
		if(cnt==k)
		{
			return n;
		}
	}
	return -1;
}
int main()
{
	int n,k;cin>>n>>k;
	cout<<solve(n,k)<<endl;
	return 0;
}*/

//liet ke cac so nguyen to
using ll=long long;

/*void solve(ll n)
{
	map<int,int>mp;
	vector<int>v;
	int r=0;
	while(n)
	{
		r=n%10;
		n/=10;
		if(r==2 || r==3 || r==5 || r==7)
		{
			if(mp.find(r)==mp.end())
			{
				v.push_back(r);
			}
			mp[r]++;
		}
	}
	for(auto p : mp)
	{
		cout<<p.first<<" "<<p.second<<endl;
	}
	cout<<endl;
	reverse(v.begin(),v.end());
	for(auto x : v)
	{
		cout<<x<<" "<<mp[x]<<endl;
	}
}
int main()
{
	ll n;cin>>n;
	solve(n);
	return 0;
}*/

//so co n chu so chia het cho x,y,z
using ll=long long;

/*ll gcd(ll a, ll b)
{
	if(b==0)return a;
	else return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
	return a/gcd(a,b)*b;
}
ll solve(int n, int x, int y, int z)
{
	ll m=lcm(lcm(x,y),z);
	ll res=(ll)(pow(10,n-1)+(m-1))/m*m;
	if(res < pow(10,n))
	{
		return res;
	}
	return -1;
}
int main()
{
	int x,y,z,n;
	cin>>x>>y>>z>>n;
	cout<<solve(n,x,y,z)<<endl;
	return 0;
}*/

//dem uoc cua n!
using ll=long long;
/*const ll MOD=1000000007;
bool prime[1000001];

//void sieve()
//{
//	for(int i=0; i<=1000000; i++)
//	{
//		prime[i]=true;
//	}
//	prime[0]=prime[1]=false;
//	for(int i=2; i<=sqrt(1000000); i++)
//	{
//		if(prime[i]==true)
//		{
//			for(int j=i*i; j<=1000000; j+=i)
//			{
//				prime[j]=false;
//			}
//		}
//	}
//}

int nt(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return n>1;
}

ll degree(int n, int p)
{
	ll ans=0;
	for(int i=p; i<=n; i*=p)
	{
		ans+=n/i;
		ans%=MOD;
	}    
	return ans%MOD;
}

ll solve(int n)
{
	ll ans=1;
	for(int i=1; i<=n; i++)
	{
		if(nt(i))
		{
			ans*=(1ll*degree(n,i)+1);
			ans%=MOD;
		}
	}
	return ans%MOD;
}

int main()
{
	int n;cin>>n;
	cout<<solve(n)<<endl;
	return 0;
}*/

int main()
{
	string s;
	cin>>s;
	s.erase(0,1);
    s.erase((s.size()-1),1);
    string temp=s;
    cout<<temp<<endl;
    return 0;
}