#include <bits/stdc++.h>

using namespace std;
//dem so luong tu trong xau
/*int main()
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	int cnt=0;
	while(ss>>token)
	{
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}*/
// xoa phan tu trong xau
/*int main()
{
	string s;
	getline(cin,s);
	string x;getline(cin,x);
	stringstream ss(s);
	string token;
	while(ss>>token)
	{
		if(token==x)
		{
			token ="";
		}
		else cout<<token<<" ";
	}
	return 0;
}*/
//chuan hoa email
/*int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		for(int i=0; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);
		}
		vector<string>v;
		stringstream ss(s);
		string token;
		while(ss>>token) v.push_back(token);
		cout<<v[v.size()-1];
		for(int i=0; i<v.size()-1; i++)
		{
			cout<<v[i][0];
		}
		cout<<"@gmail.com"<<endl;
	}
	return 0;
}*/
//chuan hoa email 2
/*int main()
{
	int t;cin>>t;
	map<vector<string>,int>mp;
	while(t--)
	{
		string s;
		getline(cin,s);
		for(int i=0; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);
		}
		vector<string>v;
		stringstream ss(s);
		string token;
		while(ss>>token)
		{
			v.push_back(token);
		}
		if(mp.find(v[v.back()])==endl)
		{
			cout<<v[v.back];
			for(int i=0; i<v.end()-1; i++)
			{
				cout<<v[i][0];
			}
			cout<<"@gmail.com"<<endl;
		}
		else
		{
			cout<<v[v.back];
			for(int i=0; i<v.end()-1; i++)
			{
				cout<<v[i][0];
			}
			cout<<mp[]"@gmail.com"<<endl;
		}
	}
	return 0;
}*/

//chuan hoa email 2 remake
/*int main()
{
	int t;cin>>t;
	map<string,int>mp;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		for(int i=0; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);
		}
		string token;
		vector<string>v;
		stringstream ss(s);
		string res="";
		while(ss>>token)
		{
			v.push_back(token);
		}
		res+=v[v.size()-1];
		for(int i=0; i<v.size()-1; i++)
		{
			res+=v[i][0];
		}
		if(mp[res]==0)
		{
			cout<<res<<"@gmail.com"<<endl;
		}
		else
		{
			cout<<res<<mp[res]+1<<"@gmail.com"<<endl;
		}
		mp[res]++;
	}
	return 0;
}*/
//chuan hoa ten 1
/*int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		for(int i=0; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);
		}
		stringstream ss(s);
		string token;
		string res="";
		vector<string>v;
		while(ss>>token)
		{
			v.push_back(token);
		}
		for(int i=0; i<v.size()-1; i++)
		{
			v[i][0]=toupper(v[i][0]);
		}
		for(int i=0; i<v.size()-1; i++)
		{
			res+=v[i];
			res+=" ";
		}
		res+=',';
		res+=" ";
		for(int i=0; i<v[v.size()-1].length(); i++)
		{
			v[v.size()-1][i]=toupper(v[v.size()-1][i]);
		}
		res+=v[v.size()-1];
		cout<<res<<endl;
	}
	return 0;
}*/
//chuan hoa ten 2
/*void chuanHoa(string &s)
{
	s[0]=toupper(s[0]);
	for(int i=1; i<s.length(); i++)
	{
		s[i]=tolower(s[i]);
	}
}

int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		string token;
		string res;
		vector<string>v;
		while(ss>>token)
		{
			v.push_back(token);
		}
		chuanHoa(v[v.size()-1]);
		res+=v[v.size()-1];
		for(int i=0; i<v.size()-1; i++)
		{
			chuanHoa(v[i]);
			if(i==(v.size()-1)-(v.size()-1))
			{
				res+=", ";
			}
			else res+=" ";
			res+=v[i];
		}
		cout<<res<<endl;
	}
	return 0;
}*/
//xau pagram 1
/*int main()
{
	string s;
	getline(cin,s);
	set<char>se;
	for(int i=0; i<s.length(); i++)
	{
		se.insert(s[i]);
	}
	if(se.size()==26)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}*/
//xau pagram 2
/*int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;
		getline(cin,s);
		int k;cin>>k;
		set<char>se;
		if(k<s.length())
		{
			cout<<"0";
			continue;
		}
		else
		{
			for(int i=0; i<s.length(); i++)
			{
				se.insert(s[i]);
			}
			if(se.size()+k>=26)
			{
				cout<<"1";
			}
			else cout<<"0";
		}
	}
	return 0;
}*/
//dem tu trong xau
/*int main()
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	int cnt=0;
	while(ss>>token)
	{
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}*/
//lon nhat va nho nhat
/*int main()
{
	int m,s;
	cin>>m>>s;
	if(s>(9*m) || (s==0 && m>1))
	{
		cout<<"NOT FOUND"<<endl;
		return 0;
	}
	int lon[m]={0},be[m]={0};
	int tmp=s;
	for(int i=0; i<m; i++)
	{
		if(s>=9)
		{
			lon[i]=9;
			s-=9;
		}
		else if(s!=0)
		{
			lon[i]=s;
			s=0;
		}
		else break;
	}
	--tmp;
	for(int i=m-1; i>0; i--)
	{
		if(tmp>=9)
		{
			be[i]=9;
			tmp-=9;
		}
		else if(tmp!=0)
		{
			be[i]=tmp;
			tmp=0;
		}
		else break;
	}
	be[0]=tmp+1;
	for(int i=0; i<m; i++)
	{
		cout<<be[i];
	}
	cout<<" ";
	for(int i=0; i<m; i++)
	{
		cout<<lon[i];
	}
	return 0;
}*/
//in so luong cau khac nhau
/*int main()
{
	int n;cin>>n;
	cin.ignore();
	set<string>se;
	while(n--)
	{
		string s;
		getline(cin,s);
		se.insert(s);
	}
	cout<<se.size()<<endl;
	return 0;
}*/
//so dep
/*bool solve(string &s)
{
	string t=s;
	reverse(t.begin(),t.end());
	if(t!=s)
	{
		return false;
	}
	for(char x: s)
	{
		if((x-'0')%2!=0)return false;
	}
	return true;
}
int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		if(solve(s))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}*/
/*void solve(string &s)
{
    for(char x : s)
    {
        x=tolower(x);
    }
}
void solve2(string &s)
{
    for(char x : s)
    {
        x=toupper(x);
    }
}
int main()
{
    string s;
    getline(cin,s);
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    reserve(s.begin(), s.end());
    solve(s);
    cout<<s<<endl;
    solve2(s);
    cout<<s<<endl;
    return 0;
}*/
//doi chu so
/*int solve()
{
	string s;
	cin>>s;
	int i=s.length()-2;
	while(i>=0 && s[i]<=s[i+1])
	{
		i--;
	}
	if(i==-1)
	{
		cout<<"NOT FOUND";
		return 0;
	}
	int j=s.length()-1;
	while(s[i]<=s[j] || (s[j-1]==s[j])&& s[j]<s[i])
	{
		j--;
	}
	swap(s[i],s[j]);
	if(s[0]-'0'==0)
	{
		cout<<"NOT FOUND"<<endl;
	}
	else
	{
		cout<<s<<endl;
	}
}
int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		solve();
	}
	return 0;
}*/
//sap dat ki tu
/*int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		map<char,int>mp;
		for(char x : s)
		{
			mp[x]++;
		}
		int max=INT_MIN;
		for(auto p : mp)
		{
			if(p.second > max)
			{
				max=p.second;
			}
		}
		if(max-(s.size()-max)>=2)
		{
			cout<<"0"<<endl;
		}
		else cout<<"1"<<endl;
	}
	return 0;
}*/
//tong lon nhat va nho nhat
using ll=long long;
/*int main()
{
	int t;cin>>t;
	while(t--)
	{
		string x,y;
	    cin>>x>>y;
	    for(char &i : x)
	    {
	    	if(i-'0'==6)
	    	{
	    		i='5';
			}
		}
		for(char &i : y)
	    {
	    	if(i-'0'==6)
	    	{
	    		i='5';
			}
		}
		ll a=stoll(x);
		ll b=stoll(y);
		ll sum1=a+b;
		cout<<sum1<<endl;
		for(char &i : x)
	    {
	    	if(i-'0'==5)
	    	{
	    		i='6';
			}
		}
		for(char &i : y)
	    {
	    	if(i-'0'==5)
	    	{
	    		i='6';
			}
		}
		ll c=stoll(x);
		ll d=stoll(y);
		ll sum2=c+d;
		cout<<sum2<<endl;
	}
	return 0;
}*/
//tong cac chu so trong xau
/*int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		for(char &x : s)
		{
			if(isalpha(x))
			{
				x=' ';
			}
		}
		stringstream ss(s);
		string token;
		ll sum=0;
		while(ss>>token)
		{
			sum+=stoll(token);
		}
		cout<<sum<<endl;
	}
	return 0;
}*/
//dem so xau con khac nhau co dung k phan tu
/*void solve()
{
	string s;
	int k;
	cin>>s>>k;
	int ans=0;
	for(int i=0; i<s.length(); i++)
	{
		int cnt[256];
		memset(cnt,0,sizeof(cnt));
		int dem=0;
		for(int j=i; j<s.length(); j++)
		{
			if(cnt[s[j]]==0)
			{
				++dem;
			}
			if(dem==k)
			{
				++ans;
			}
			if(dem>k)
			{
				break;
			}
			cnt[s[j]]=1;
		}
	}
	cout<<ans<<endl;
}
int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		solve();
	}
	return 0;
}*/
//hieu cua 2 tap tu
/*set<string>convert(string a)
{
	set<string>se;
	stringstream ss(a);
	string token;
	while(ss>>token)
	{
		se.insert(token);
	}
	return se;
}
int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string a,b;
		getline(cin,a);
		getline(cin,b);
		set<string>s1=convert(a);
		set<string>s2=convert(b);
		for(auto x : s1)
		{
			if(s2.find(x)==s2.end())
			{
				cout<<x<<" ";
			}
		}
	}
	return 0;
}*/
//bien so dep
/*bool check1(string s)
{
	for(int i=0; i<4; i++)
	{
		if(s[i]>=s[i+1])
		{
			return false;
		}
	}
	return true;
}
bool check2(string s)
{
	for(int i=1; i<5; i++)
	{
		if(s[i]!=s[i-1])
		{
			return false;
		}
	}
	return true;
}

bool check3(string s)
{
	return s[0]==s[1]&&s[1]==s[2]&&s[3]==s[4];
}
bool check4(string s)
{
	for(int i=0; i<5; i++)
	{
		if(s[i]-'0'!=6 || s[i]-'0'!=8)
		{
			return false;
		}
	}
	return true;
}
bool perfectNumbers(string &s)
{
	s.erase(s.begin()+3);
	cout<<s<<endl;
	for(int i=1; i<s.length(); i++)
	{
		if()
		{
			return false;
		}
	}
	return true;
}
bool solve(string &s)
{
	for(char &x : s)
	{
		if(x=='-')
		{
			x=' ';
		}
	}
	stringstream ss(s);
	vector<string>v;
	string token;
	while(ss>>token)
	{
		v.push_back(token);
	}
	if(perfectNumbers(v[v.size()-1]))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}
int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		solve(s);
	}
	return 0;
}*/
//HackerRank 1
/*string chuanHoaten(string &s)
{
    s[0]=toupper(s[0]);
    for(int i=1; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
}
string chuanHoadate(string &s)
{
    if(s.size()!=2 && s.size()!=4)
    {
        s.insert(0,"0");
    }
    return s;
}
int main() {
    string name,date;
    getline(cin,name);
    getline(cin,date);
    vector<string>v1;
    vector<string>v2;
    stringstream ss(name);
    string token;
    while(ss>>token)
    {
        v1.push_back(token);
    }
    string res1;
    for(auto x : v1)
    {
        chuanHoaten(x);
        res1+=x;
        res1+=" ";
    }
    res1.pop_back();
    cout<<res1<<endl;
    for(int i=0; i<date.size(); i++)
    {
        if(date[i]=='/')
        {
            date[i]=' ';
        }
    }
    string res2;
    stringstream st(date);
    string word;
    while(st>>word)
    {
        v2.push_back(word);
    }
    for(auto x : v2)
    {
        chuanHoadate(x);
        res2+=x;
        res2+='/';
    }
    res2.pop_back();
    cout<<res2<<endl;
    return 0;
}*/
//HackerRank 2
using ll=long long;
/*bool solve(string a, string b)
{
	int n=a.size()-1;
	int m=b.size()-1;
	int i=0,j=0;
	while(i!=max(n,m) || j!=max(m,n))
	{
		if(a[i]==b[j] && i!=n && j!=m)
		{
			i++;
			j++;
		}
		if(a[i]>b[j])
		{
			return a > b;
		}
		if(a[i]<b[j])
		{
			return a < b;
		}
		if(a[i]==b[j] && i==n && j<m)
		{
			j++;
		}
		if(a[i]==b[j] && j==m && i<n)
		{
			i++;
		}
		if(i==n && j==m)
		{
			return a.size() < b.size();
		}
    }   
}
string chuanHoa(string &s)
{
	if(s[0]=='0')
	{
		s.erase(0,1);
	}
	return s;
}
int main()
{
	string s;
	getline(cin,s);
	for(char &x : s)
	{
		if(isalpha(x))
		{
			x=' ';
		}
	}
	stringstream ss(s);
	string token;
	vector<string>v;
	while(ss>>token)
	{
		chuanHoa(token);
		v.push_back(token);
	}
	sort(v.begin(),v.end(),solve);
	for(auto x : v)
	{
		cout<<x;
	}
	return 0;
}*/
//test
/*string chuanHoa(string &s)
{
	int i=0;
	while(s[i]-'0'==0)
	{
		s.erase(i,1);
	}
	return s;
}
int main()
{
	string s;
	cin>>s;
	chuanHoa(s);
	cout<<s<<endl;
	return 0;
}*/
//chuan hoa ten 2
/*string chuanHoa1(string &s)
{
	for(int i=0; i<s.size(); i++)
	{
		s[i]=toupper(s[i]);
	}
	return s;
}

string chuanHoa2(string &s)
{
	s[0]=toupper(s[0]);
	for(int i=1; i<s.size(); i++)
	{
		s[i]=tolower(s[i]);
	}
	return s;
}
int main()
{
	string s;
	getline(cin,s);
	vector<string>v;
	stringstream ss(s);
	string token;
	while(ss>>token)
	{
		v.push_back(token);
	}
	string res1="";
	for(int i=0; i<v.size()-1; i++)
	{
		chuanHoa2(v[i]);
		res1+=v[i];
		res1+=" ";
	}
	res1.pop_back();
	res1+=", ";
	chuanHoa1(v[v.size()-1]);
	res1+=v[v.size()-1];
	cout<<res1<<endl;
	string res2="";
	res2+=v[v.size()-1];
	res2+=",";
	for(int i=0; i<v.size()-1; i++)
	{
		res2+=" ";
		res2+=v[i];
	}
	cout<<res2<<endl;
	return 0;
}*/
//email va mat khau
/*string email(string &s)
{
	vector<string>v;
	for(int i=0; i<s.size(); i++)
	{
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string token;
	while(ss>>token)
	{
		v.push_back(token);
	}
	s.erase(0,s.size());
	s+=v[v.size()-1];
	for(int i=0; i<v.size()-1; i++)
	{
		s+=v[i][0];	
	}
	s+="@xyz.edu.vn";
	return s;
}
int main()
{
    int n;cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string token;
        vector<string>v;
        while(ss>>token)
        {
        	v.push_back(token);
		}
		string res1="";
		for(int i=0; i<v.size()-1; i++)
		{
			res1+=v[i];
		}
		res1=email(res1);
		cout<<res1<<endl;
		string res2;
		res2+=v[v.size()-1];
		string res3="";
		for(int i=0; i<res2.size(); i++)
		{
			if(res2[i]=='/')
			{
				res2[i]=' ';
			}
		}
		stringstream st(res2);
		string word;
		while(st>>word)
		{
			res3+=word;
		}
		cout<<res3<<endl;
    }
    return 0;
}*/
//ghep xau
/*int main()
{
	int n;cin>>n;
	string a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	vector<string>v;
	for(int i=0; i<n; i++)
	{
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end(),[](string a,string b)->bool{
		return a > b;
	});
	for(auto x : v)
	{
		cout<<x;
	}
	return 0;
}*/
//so sanh 2 xau
/*int main()
{
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	if (str1 > str2)
	{
		cout << "str1 dung sau str2 trong tu dien!" << endl;
	}
	
	if (str1 == str2)
	{
		cout << "Hai chuoi giong nhau!" << endl;
	}
	
	if (str1 < str2)
	{		
		cout << "str1 dung truoc str2 trong tu dien!" << endl;
	}
	return 0;
}*/
//haiku
/*int main()
{
	int a,b,c;cin>>a>>b>>c;
	if(a+b+c==17 && ((a==5 || a==7) && (b=5 || b==7) && (c==5 || c==7)))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}*/
//paint
/*int main()
{
	int t;cin>>t;
	string res;
	while(t--)
	{
		int x;cin>>x;
		if(x==1)
		{
			char s;
			cin>>s;
			res+=s;
		}
		if(x==2)
		{
			char s,z;
			cin>>s>>z;
			for(int i=0; i<res.size(); i++)
			{
				if(res[i]==s)
				{
					res[i]=z;
				}
			}
		}
	}
	cout<<res<<endl;
	return 0;
}*/
//tap chung cua 2 xau
/*string chuanHoa(string &s)
{
	for(int i=0; i<s.size(); i++)
	{
		s[i]=tolower(s[i]);
	}
	return s;
}
int main()
{
	string s,t;
	getline(cin,s);
	getline(cin,t);
	stringstream ss(s);
	set<string>se;
	string token;
	while(ss>>token)
	{
		chuanHoa(token);
		se.insert(token);
	}
	set<string>st;
	stringstream tt(t);
	string word;
	while(tt>>word)
	{
		chuanHoa(word);
		st.insert(word);
	}
	for(auto x : se)
	{
		if(st.find(x)!=st.end())
		{
			cout<<x<<" ";
		}
	}
	return 0;
}*/
//tap tu rieng cua 2 xau
/*string chuanHoa(string &s)
{
	for(int i=0; i<s.size(); i++)
	{
		s[i]=tolower(s[i]);
	}
	return s;
}
int main()
{
	string s,t;
	getline(cin,s);
	getline(cin,t);
	stringstream tt(t);
	set<string>se,st;
	string token;
	while(tt>>token)
	{
		chuanHoa(token);
		st.insert(token);
	}
	string word;
	stringstream ss(s);
	while(ss>>word)
	{
		chuanHoa(word);
		se.insert(word);
	}
	for(auto x : se)
	{
		if(st.find(x)==st.end())
		{
			cout<<x<<" ";
		}
	}
	return 0;
}*/
//xau con lien tiep co ki tu giong nhau dai nhat
/*int main()
{
	string s;
	getline(cin,s);
	string tmp;
	tmp+=s[0];
	string max;
	for(int i=1; i<s.size(); i++)
	{
		if(s[i]==s[i-1])
		{
			tmp+=s[i];
		}
		else
		{
			if(tmp.size() > max.size() || (tmp.size() == max.size() && tmp > max))
			{
				max=tmp;
			}
			tmp="";
			tmp+=s[i];
		}
	}
	if(tmp.size() > max.size() || (tmp.size() == max.size() && tmp > max))
	{
		max=tmp;
	}
	cout<<max<<endl;
	return 0;
}*/

//xau con co ki tu lien tiep khac nhau
/*int main()
{
	string s;
	cin>>s;
	string tmp;
	tmp+=s[0];
	string ans;
	for(int i=1; i<s.size(); i++)
	{
		if(s[i]!=s[i-1])
		{
			tmp+=s[i];
		}
		else
		{
			if(tmp.size() > ans.size() || (tmp.size()==ans.size() && tmp > ans))ans=tmp;
			tmp="";
			tmp+=s[i];
		}
	}
	if(tmp.size() > ans.size() || (tmp.size()==ans.size() && tmp > ans))ans=tmp;
	cout<<ans<<endl;
	return 0;
}*/

//so lon nhat xuat hien trong xau
/*string chuanHoa(string &s)
{
	if(s.size()>1)
	{
		while(s[0]-'0'==0)
		{
			s.erase(0,1);
		}
	}
	return s;
}
int main()
{
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++)
	{
		if(isalpha(s[i]))
		{
			s[i]=' ';
		}
	}
	stringstream ss(s);
	string token;
	vector<string>v;
	while(ss>>token)
	{
		chuanHoa(token);
		v.push_back(token);
	}
	sort(v.begin(),v.end(),[](string a,string b)->bool{
		if(a.size() > b.size())return 1;
		if(a.size() < b.size())return -1;
		int k=a.size();
		for(int i=0; i<k; i++)
		{
			if(a[i]>b[i])return 1;
			if(a[i]<b[i])return -1;
		}
		return 0;
	});
	cout<<*v.begin()<<endl;
	return 0;
}*/

//so dep 1
using ll=long long;
/*bool solve1(string s)
{
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]!='2'&&s[i]!='3'&&s[i]!='5'&&s[i]!='7')return false;
	}
	return true;
}
ll check(ll n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)return 0;
	}
	return n>1;
}
ll solve2(string s)
{
	ll sum=0;
	for(int i=0; i<s.size(); i++)
	{
		sum+=s[i]-'0';
	}
	return check(sum);
}
int main()
{
	string s;
	cin>>s;
	if(solve1(s)&&solve2(s))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}*/

//so dep 2
/*bool solve1(string &s)
{
	string tmp=s;
	reverse(s.begin(),s.end());
	return s==tmp;
}

bool solve2(string s)
{
	string tmp="6";
	if(s.find(tmp)!=string::npos)
	{
		return true;
	}
	return false;
}
int main()
{
	string s;
	cin>>s;
	if(solve1(s)&&solve2(s)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}*/

//so dep 3
/*bool solve1(string s)
{
	for(int i=1; i<s.size(); i++)
	{
		if(s[i] < s[i-1])
		{
			return false;
		}
	}
	return true;
}

bool solve2(string s)
{
	for(int i=s.size()-1; i>0; i--)
	{
		if(s[i] > s[i-1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string s;
	cin>>s;
	if(solve1(s) || solve2(s))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}*/

//so chia het cho 6
using ll=long long;
/*bool solve1(string s)
{
	int n=s.size()-1;
	if((s[n]-'0')%2==0)
	{
		return true;
	}
	return false;
}

bool solve2(string s)
{
	ll sum=0;
	for(int i=0; i<s.size(); i++)
	{
		sum+=s[i]-'0';
	}
	return sum%3==0;
}
int main()
{
	string s;
	cin>>s;
	if(solve1(s) && solve2(s))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}*/

//so chia het cho 4
/*bool solve(string s)
{
    string tmp;
    int ans=0;
    tmp+=s[s.size()-2];
    tmp+=s[s.size()-1];
    ans=stoi(tmp);
    return ans%4==0;
}
int main()
{
    string s;
    cin>>s;
    if(s.size()==1 && (s=="0"||s=="4"))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(solve(s))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}*/

//so chia het cho 15
/*bool solve1(string s)
{
	if((s[s.size()-1]-'0')!=5 && (s[s.size()-1]-'0')!=0)
	{
		return false;
	}
	return true;
}

bool solve2(string s)
{
	int sum=0;
	for(int i=0; i<s.size(); i++)
	{
		sum+=s[i]-'0';
	}
	return sum%3==0;
}
int main()
{
	string s;
	cin>>s;
	if(solve1(s) && solve2(s))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}*/

//so chia het cho 25
/*bool solve1(string s)
{
	int n=s.size()-1;
	if(s[n]=='0' && s[n-1]=='0')
	{
		return true;
	}
	return false;
}

bool solve2(string s)
{
	string tmp;
	if(s.size()==1)
	{
		return false;
	}
	tmp+=s[s.size()-2];
	tmp+=s[s.size()-1];
	int ans=0;
	ans=stoi(tmp);
	return ans%25==0;
}
int main()
{
	string s;
	cin>>s;
	if(solve1(s) || solve2(s))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}*/

//so chia het cho 11
/*int solve1(string s)
{
	int sum1=0;
	int sum2=0;
	for(int i=0; i<s.size(); i+=2)
	{
		sum1+=s[i]-'0';
	}
	for(int i=1; i<s.size(); i+=2)
	{
		sum2+=s[i]-'0';
	}
	return (max(sum1,sum2)-min(sum1,sum2))%11==0;
}
int main()
{
	string s;
	cin>>s;
	if(solve1(s))
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}*/

//phep chia du
using ll=long long;

/*ll mod(string n,int m)
{
	ll r=0;
	for(char c : n)
	{
		r=r*10+(c-'0');
		r%=m;
	}
	return r;
}
int main()
{
	string n;
	int m;
	cin>>n>>m;
	cout<<mod(n,m)<<endl;
	return 0;
}*/

//uoc chung lon nhat
using ll=long long;


/*ll mod(string n, ll m)
{
	ll r=0;
	for(char c : n)
	{
		r=r*10+(c-'0');
		r%=m;
	}
	return r;
}

int main()
{
	string n;
	ll m;
	cin>>n>>m;
	ll ans=0;
	ll r=mod(n,m);
	while(m!=0)
	{
		ans=r%m;
		r=m;
		m=ans;
	}
	cout<<r<<endl;
	return 0;
}*/

//luy thua co so lon
using ll=long long;
/*ll MOD=1e9+7;

ll mod(string n)
{
	ll r=0;
	for(char c : n)
	{
		r=r*10+(c-'0');
		r%=MOD;
	}
	return r;
}

ll powMod(string n, ll b)
{
	ll res=1;
	ll a=mod(n);
	while(b)
	{
		if(b%2!=0)
		{
			res*=a;
			res%=MOD;
		}
		b/=2;
		a*=a;
		a%=MOD;
	}
	return res%MOD;
}

int main()
{
	string n;
	ll m;
	cin>>n>>m;
	cout<<powMod(n,m)<<endl;
	return 0;
}*/

//so may man
using ll=long long;
bool solve(string s)
{
	ll sum=0;
	for(int i=0; i<s.size(); i++)
	{
		sum+=s[i]-'0';
	}
	return sum==9;
}

bool solve2(string s)
{
	ll sum=0;
	for(int i=0; i<s.size(); i++)
	{
		sum+=s[i]-'0';
	}
	string res=to_string(sum);
	return sum==9 || solve(res);
}
int main()
{
	string s;
	cin>>s;
	if(solve2(s))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}