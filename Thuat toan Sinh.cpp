#include <bits/stdc++.h>

using namespace std;


//sinh nhi phan

/*int n,a[11];
bool final=false;

void ktao()
{
	for(int i=1; i<=n; i++)
	{
		a[i]=0;
	}
}

void sinh()
{
	int i=n;
	while(i>=1 && a[i]==1)
	{
		a[i]=0;
		--i;
	}
	if(i==0)
	{
		final=true;
	}
	else
	{
		a[i]=1;
	}
}

int main()
{
	cin>>n;
	while(!final)
	{
		for(int i=1; i<=n; i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}
	return 0;
}*/

//sinh to hop chap k cua n
/*int n,k,a[100];
bool final=false;

void ktao()
{
	for(int i=1; i<=k; i++)
	{
		a[i]=i;
	}
}

void sinh()
{
	int i=k;
	while(i>=1 && a[i]==n-k+i)
	{
		--i;
	}
	if(i==0)
	{
		final=true;
	}
	else
	{
		a[i]++;
		for(int j=i+1; j<=k; j++)
		{
			a[j]=a[j-1]+1;
		}
	}
}

int main()
{
	cin>>n>>k;
	ktao();
	while(final==false)
	{
		for(int i=1; i<=k; i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}
	return 0;
}*/

//sinh hoan vi
/*int n,a[100];
bool final=false;

void ktao()
{
	for(int i=1; i<=n; i++)
	{
		a[i]=i;
	}
}

void sinh()
{
	int i=n-1;
	while(i>=1 && a[i] > a[i+1])
	{
		--i;
	}
	if(i==0)
	{
		final=true;
	}
	else
	{
		int j=n;
		while(a[i] > a[j])
		{
			--j;
		}
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}

int main()
{
	cin>>n;
	ktao();
	while(!final)
	{
		for(int i=n; i>=1; i--)
		{
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}
	return 0;
}*/

//xep vi tri
/*int n;
string a[11];
bool final=false;

void sinh()
{
	int i=n-1;
	while(i>=1 && a[i] > a[i+1])
	{
		--i;
	}
	if(i==0)
	{
		final=true;
	}
	else
	{
		int j=n;
		while(a[i] > a[j])
		{
			--j;
		}
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}

int main()
{
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	while(!final)
	{
		for(int i=1; i<=n; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
	return 0;
}*/

//dem thu tu
/*int n,a[11];
bool final=false;
vector<vector<int>>v;
void ktao()
{
    for(int i=1; i<=n; i++)
    {
        a[i]=i;
    }
}

void sinh()
{
    int i=n-1;
    while(i>=1 && a[i] > a[i+1])
    {
        --i;
    }
    if(i==0)
    {
        final=true;
    }
    else
    {
        int j=n;
        while(a[i] > a[j])
        {
            --j;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}

int main() {
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    while(!final)
    {
        vector<int>tmp(a+1,a+n+1);
        v.push_back(tmp);
        sinh();
    }
    int cnt=0;
    for(int i=0; i<v.size(); i++)
    {
        cnt++;
        bool ok=true;
        for(int j=0; j<n; j++)
        {
            if(v[i][j]!=b[j])
            {
                ok=false;break;
            }
        }
        if(ok==true)
        {
            cout<<cnt<<endl;break;
        }
    }
    return 0;
}*/

/*int n,k;
int a[1001];
bool final=false;

void ktao()
{
	for(int i=1; i<=k; i++)
	{
		a[i]=i;
	}
}

void sinh()
{
    int i=k;
    while(i>=1 && a[i]==n-k+i)
    {
        --i;
    }
    if(i==0)
    {
        final=true;
    }
    else
    {
        a[i]++;
        for(int j=i+1; j<k; j++)
        {
            a[j]=a[j-1]+1;
        }
    }
}

int main()
{
	cin>>n>>k;
	ktao();
	while(!final)
	{
		for(int i=1; i<=k; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
	return 0;
}*/

//so thu tu to hop
/*int n,k;
int a[16];
bool final=false;
vector<vector<int>>v;

void ktao()
{
	for(int i=0; i<k; i++)
	{
		a[i]=i+1;
	}
}

void sinh()
{
	int i=n-1;
	while(i>=0 && a[i]==n-k+i+1)
	{
		--i;
	}
	if(i<0)
	{
		final=true;
	}
	else
	{
		a[i]++;
		for(int j=i+1; j<k; j++)
		{
			a[j]=a[j-1]+1;
		}
	}
}

int main()
{
	cin>>n>>k;
	int b[k];
	for(int i=0; i<k; i++)
	{
		cin>>b[i];
	}
	ktao();
	while(!final)
	{
		vector<int>tmp(a,a+k);
		v.push_back(tmp);
		sinh();
	}
	int dem=0;
	for(int i=v.size()-1; i>=0; i--)
	{
		dem++;
		bool check=true;
		for(int j=0; j<k; j++)
		{
			if(v[i][j] != b[j])
			{
				check=false;
				break;
			}
		}
		if(check==true)
		{
			cout<<dem<<endl;
			break;
		}
	}
	return 0;
}*/

//chinh hop lap
/*int n,k;
int a[9];
bool final=false;

void ktao()
{
	for(int i=1; i<=k; i++)
	{
		a[i]=1;
	}
}

void sinh()
{
	int i=k;
	while(i>=1 && a[i]==n)
	{
		--i;
	}
	if(i==0)
	{
		final=true;
	}
	else
	{
		a[i]++;
		for(int j=i+1; j<=k; j++)
		{
			a[j]=1;
		}
	}
}

int main()
{
	cin>>n>>k;
	ktao();
	while(!final)
	{
		for(int i=1; i<=k; i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}
	return 0;
}*/

//xau nhi phan co k bit 1
/*int n,k,a[16];
bool final=false;
vector<vector<int>>v;

void ktao()
{
    for(int i=0; i<n; i++)
    {
        a[i]=0;
    }
}

void sinh()
{
    int i=n-1;
    while(i>=0 && a[i]==1)
    {
        a[i]=0;
        --i;
    }
    if(i<0)
    {
        final=true;
    }
    else
    {
        a[i]=1;
    }
}

bool solve1(vector<int>t)
{
    int cnt=0;
    for(int i=0; i<t.size(); i++)
    {
        cnt+=t[i];
    }
    return cnt==k;
}

int main() {
    cin>>n>>k;
    ktao();
    while(!final)
    {
        vector<int>tmp(a,a+n);
        v.push_back(tmp);
        sinh();
    }
    for(int i=0; i<v.size(); i++)
    {
        if(solve1(v[i]))
        {
            for(int j=0; j<n; j++)
            {
                cout<<v[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}*/

//liet ke tap con

/*void sinh(int n)
{
	string a(n,'0');
	bool final=false;
	vector<string>res;
	string tmp="";
	while(!final)
	{
		int i=n-1;
		while(i>=0 && a[i]=='1')
		{
			a[i]='0';
			--i;
		}
		if(i>=0)
		{
			a[i]='1';
			for(int i=0; i<n; i++)
			{
				if(a[i]=='1')
				{
					if(tmp=="")tmp+=to_string(i+1);
					else tmp+=(" "+to_string(i+1));
				}
			}
		}
		else final=true;
		res.push_back(tmp);
		tmp="";
	}
	sort(res.begin(),res.end());
	for(auto x : res)
	{
		cout<<x<<endl;
	}
}


int main()
{
	int n;
	cin>>n;
	sinh(n);
	return 0;
}*/

//so loc phat
/*int n;
int a[15];
vector<vector<int>>v;
bool final=false;

void ktao()
{
    for(int i=0; i<n; i++)
    {
        a[i]=0;
    }
}

void sinh()
{
    int i=n-1;
    while(i>=0 && a[i]==1)
    {
        a[i]=0;
        --i;
    }
    if(i<0)
    {
        final=true;
    }
    else
    {
        a[i]=1;
    }
}

bool solve1(vector<int>ve)
{
    if(ve[0]==1 && ve[n-1]==0)
    {
        return true;
    }
    else return false;
}

bool solve2(vector<int>ve)
{
    for(int i=1; i<ve.size(); i++)
    {
        if(ve[i]+ve[i-1]==2)
        {
            return false;
        }
    }
    return true;
}

bool solve3(vector<int>ve)
{
	int cnt=0;
    for(int i=0; i<ve.size(); i++)
    {
        if(ve[i]==0)
        {
            cnt++;
            if(cnt > 3)
            {
            	return false;
            	break;
			}
        }
        else cnt=0;
    }
    return true;
}

int main() {
    cin>>n;
    ktao();
    while(!final)
    {
        vector<int>tmp(a,a+n);
        if(solve1(tmp) && solve2(tmp) && solve3(tmp))
        {
            v.push_back(tmp);
        }
        sinh();
    }
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[i][j]==1)
            {
                cout<<"8";
            }
            else
            {
                cout<<"6";
            }
        }
        cout<<endl;
    }
    return 0;
}*/

//boi so
using ll=long long;
/*string a(19,'0');
bool final=false;

void ktao()
{
    for(int i=0; i<a.size(); i++)
    {
        if(i==a.size()-1)
        {
        	a[i]='8';
		}
		else a[i]='0';
    }
}

void sinh()
{
    int i=a.size()-1;
    while(i>=0 && a[i]=='8')
    {
        a[i]='0';
        --i;
    }
    if(i<0)
    {
        final=true;
    }
    else
    {
        a[i]='8';
    }
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        int k;cin>>k;
        ktao();
        while(!final)
        {
            ll res=stoll(a);
            if(res % k==0)
            {
                cout<<res<<endl;
                break;
            }
            sinh();
        }
    }
    return 0;
}*/

//xau doi xung
/*int n;
string a;
bool final=false;
vector<string>v;

void ktao()
{
    for(int i=0; i<n; i++)
    {
        a[i]='0';
    }
}

void sinh()
{
    int i=n-1;
    while(i>=0 && a[i]=='1')
    {
        a[i]='0';
        --i;
    }
    if(i<0)
    {
        final=true;
    }
    else
    {
        a[i]='1';
    }
}

bool solve(string ve)
{
    int i=0,j=ve.size()-1;
    while(i > j)
    {
        if(ve[i]!=ve[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    cin>>n;
    ktao();
    while(!final)
    {
        if(solve(a))
        {
        	v.push_back(a);
		}
		sinh();
    }
    for(auto x : v)
    {
    	cout<<x<<endl;
	}
    return 0;
}*/

//so loc phat

/*vector<string>v;


bool solve(string tmp)
{
    string res=tmp;
    reverse(res.begin(),res.end());
    return res==tmp;
}

void sinh(int n)
{
	bool final=false;
	string a(n,'0');
	while(!final)
	{
		int i=a.size()-1;
		while(i>=0 && a[i]=='1')
		{
			a[i]='0';
			--i;
		}
		if(i>=0)
		{
			a[i]='1';
		}
		else
		{
			final=true;
		}
		if(solve(a))
		{
			v.push_back(a);
		}
	}
}

int main()
{
	int n;cin>>n;
	for(int i=2; i<=20; i+=2)
	{
		sinh(n);
	}
	int cnt=0;
	for(auto x : v)
	{
		while(cnt < n)
		{
			cout<<x<<" ";
			cnt++;
		}
	}
	return 0;
}*/

//liet ke ky tu


/*void solve(char c,int n)
{
	string a(n,'A');
	bool final=false;
	while(!final)
	{
		cout<<a<<endl;
		int i=n-1;
		while(i>=0 && a[i]==c)
		{
			--i;
		}
		if(i>=0)
		{
			a[i]++;
			for(int j=i+1; j<n; j++)
			{
				a[j]=a[j]-1;
			}
		}
		else final=true;
	}
}

int main()
{
	char c;
	int n;
	cin>>c>>n;
	solve(c,n);
	return 0;
}*/

//ma so may tinh
/*int n;
string tmp[5]={"A","B","C","D","E"};
string a[5];
int b[6];
bool final=false;
bool ok=false;
void ktao1()
{
    for(int i=0; i<n; i++)
    {
    	a[i]=tmp[i];
	}
}

void ktao2()
{
    for(int i=0; i<n; i++)
    {
        b[i]=1;
    }
}

void sinh1()
{
    int i=n-2;
    while(i>=0 && a[i] > a[i+1])
    {
        --i;
    }
    if(i<0)
    {
        final=true;
    }
    else
    {
        int j=n-1;
        while(a[i] > a[j])
        {
            --j;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n);
    }
}

void sinh2()
{
    int i=n-1;
    while(i>=0 && b[i]==n)
    {
        --i;
    }
    if(i<0)
    {
        ok=true;
    }
    else
    {
        b[i]++;
        for(int j=i+1; j<n; j++)
        {
            b[j]=b[j]-1;
        }
    }
}


int main() {
    cin>>n;
    ktao1();
    while(!final)
    {
    	ktao2();
        while(!ok)
        {
            for(int i=0; i<n; i++)
            {
            	cout<<a[i];
			}
            for(int i=0; i<n; i++)
            {
                cout<<b[i];
            }
            cout<<endl;
            sinh2();
        }
        ok=false;
        sinh1();
    }
    return 0;
}*/

//ghep chu cai spoj
/*int n;
string a[8];
string tmp[8]={"A","B","C","D","E","F","G","H"};
bool final=false;

void ktao()
{
	for(int i=0; i<n; i++)
	{
		a[i]=tmp[i];
	}
}


void sinh()
{
	int i=n-2;
	while(i>=0 && a[i] > a[i+1])
	{
		--i;
	}
	if(i<0)
	{
		final=true;
	}
	else
	{
		int j=n-1;
		while(a[i] > a[j])
		{
			--j;
		}
		swap(a[i],a[j]);
		reverse(a+i+1,a+n);
	}
}

bool solve(string a[])
{
	if(n<=4)
	{
		if(a[0]=="A" || a[n-1]=="A")
		{
			return true;
		}
	}
	else
	{
		if((a[0]=="A" && a[n-1]=="E") || (a[0]=="E" && a[n-1]=="A"))
		{
			return true;
		}
		for(int i=1; i<n; i++)
		{
			if((a[i]=="A" && a[i-1]=="E") || (a[i]=="E" && a[i-1]=="A"))
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	string c;
	cin>>c;
	if(c=="D")
	{
		n=4;
	}
	else if(c=="E")
	{
		n=5;
	}
	else if(c=="F")
	{
		n=6;
	}
	else if(c=="G")
	{
		n=7;
	}
	else
	{
		n=8;
	}
	ktao();
	vector<vector<string>>v;
	while(!final)
	{
		if(solve(a)==true)
		{
			vector<string>tmp(a,a+n);
			v.push_back(tmp);
		}
		sinh();
    }
    for(int i=0; i<v.size(); i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		cout<<v[i][j];
		}
		cout<<endl;
	}
    return 0;
}*/

//dau nghoac hop le
/*int n;
string a(n,')');
bool final=false;
vector<string>v;

void sinh()
{
	int i=n-1;
	while(i>=0 && a[i]='(')
	{
		a[i]=')';
		--i;
	}
	if(i<0)
	{
		final=true;
	}
	else
	{
		a[i]='(';
	}
}

void solve(string a)
{
	int cnt1=0,cnt2=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]=='')
	}
}

int main()
{
	cin>>n;
}*/

//so loc phat chan
/*using ll=long long;
bool final=false;
vector<string>v;
int n;
string a;
void ktao()
{
	a=string(n,'6');
}

void sinh()
{
	int i=n-1;
	while(i>=0 && a[i]=='8')
	{
		a[i]='6';
		--i;
	}
	if(i<0)
	{
		final=true;
	}
	else
	{
		a[i]='8';
	}
}

int main()
{
	int m;cin>>m;
	for(int j=1; j<=9; j++)
	{
		n=j;
		ktao();
		final=false;
		while(!final)
		{
			string tmp=a;
			reverse(tmp.begin(),tmp.end());
			v.push_back(a+tmp);
			sinh();
		}
	}
	//sort(v.begin(),v.end());
	for(int i=0; i<m; i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}*/


// day con co tong bang k

int n, k, a[16];
int X[30];
bool final = false;
bool ok = false;
vector<string>v;


void kTao(){
	for(int i = 0; i < n; i++){
		X[i] = 0;
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 0 && X[i] == 1){
		X[i] = 0;
	}
	if(n == -1){
		final = true;
	}
	else{
		X[i] = 1;
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	kTao();
	while(!final){
		int sum = 0;
		string res = "";
		for(int i = 0; i < n; i++){
			if(X[i] == 1){
				sum += a[i];
			}
		}
		if(sum == k){
			for(int i = 0; i < n; i++){
				if(X[i] == 1){
					res += to_string(a[i]);
				}
			}
			v.push_back(res);
		}
		sinh();
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;
}