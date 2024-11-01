#include <bits/stdc++.h>

using namespace std;


// doi tien
/*int main(){
	int n; cin >> n;
	int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int ans = 0;
	for(int i = 9; i >= 0; i--){
		ans += n / a[i];
		n %= a[i];
	}
	cout << ans << endl;
	return 0;
}*/

// nham chu so
/*int main(){
	string n, m; cin >> n >> m;
	for(int i = 0; i < n.size(); i++){
		if(n[i] == '5'){
			n[i] = '6';
		}
	}
	for(int i = 0; i < m.size(); i++){
		if(m[i] == '5'){
			m[i] = '6';
		}
	}
	cout << stoll(n) + stoll(m) << " ";
	for(int i = 0; i < n.size(); i++){
		if(n[i] == '6'){
			n[i] = '5';
		}
	}
	for(int i = 0; i < m.size(); i++){
		if(m[i] == '6'){
			m[i] = '5';
		}
	}
	cout << stoll(n) + stoll(m) << " ";
	return 0;
}*/


// sap xep tham lam
/*int main(){
	int n; cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	for(int i = 0; i < n; i++){
		if(a[i] != b[i] && a[i] != b[n - i -1]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}*/


// noi day 2

/*using ll = long long;
int main(){
	int n;
	cin >> n;
	ll a[n];
	priority_queue<ll>Q;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		Q.push(a[i]);
	}
	ll ans = 0;
	while(Q.size() > 1){
		ll t1 = Q.top();
		Q.pop();
		ll t2 = Q.top();
		Q.pop();
		ans += t1 + t2;
		Q.push(t1 + t2);
	}
	cout << ans << endl;
	return 0;
}*/


// taxi

using ll = long long;


/*int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == 1)cnt1++;
        else if(a[i] == 2)cnt2++;
        else if(a[i] == 3)cnt3++;
        else cnt4++;
    }
    ll ans = 0;
    ans += cnt4;
    while(cnt3 > 0 && cnt1 > 0){
            cnt3--;
            cnt1--;
            ans++;
        }
        while(cnt2 > 1){
            cnt2 -=2;
            ans++;
        }
        while(cnt2 > 0 && cnt1 > 1){
            cnt1 -= 2;
            cnt2--;
            ans++;
        }
        if(cnt2 == 1 && cnt1 > 1){
            cnt2--;
            cnt1 -= 2;
            ans++;
        }
        if(cnt2 == 1 && cnt1 == 1){
            cnt2--;
            cnt1--;
            ans++;
        }
        if(cnt2 == 1 && cnt1 == 0){
            cnt2--;
            ans++;
        }
        if(cnt1 > 0 && cnt2 == 0 && cnt3 == 0){
            if(cnt1 % 4 == 0){
                ans += cnt1 / 4;
            }
            else
            {
                ans += cnt1 / 4;
                ans++;
            }
        }
    if(cnt1 == 0){
         ans += cnt3;
    }
    //cout << cnt1 << cnt2 << cnt3 << endl;
    cout << ans << endl;
    return 0;
}*/

// cap so
/*int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(n % 2 != 0){
		cout << "NO" << endl;
		return 0;
	}
	int chan = 0, le = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			chan++;
		}
		else le++;
	}
	if(chan % 2 == 0 && le % 2 == 0){
		cout << "YES" <<endl;
		return 0;
	}
	else{
		sort(a, a + n);
		bool ok = false;
		for(int i = 1; i < n; i++){
			if(abs(a[i] - a[i-1]) == 1 && a[i] + a[i-1] % 2 != 0){
				ok = true;
			}
		}
		if(!ok){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}*/


// sap dat xau ki tu
/*using ll = long long;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char, ll>mp;
	for(int i = 0; i < s.size(); i++){
		mp[s[i]]++;
	}
	if(n >= s.size()){
		cout << "0" << endl;
		return 0;
	}
	priority_queue<ll>Q;
	for(auto p : mp){
		Q.push(p.second);
	}
	ll ans = 0;
	while(n--){
		ll t1 = Q.top();
		Q.pop();
		t1--;
		Q.push(t1);
	}
	for(auto p : mp){
		ans += p.second * p.second;
	}
	cout << ans << endl;
	return 0;
}*/


// so may man
/*int main(){
	int n;
	cin >> n;
	if(n % 4 != 0 && n % 7 != 0){
		cout << "-1" << endl;
		return 0;
	}
	
}*/

// mua luong thuc SPOJ
/*int main(){
	int n, s, m;
	cin >> n >> s >> m;
	int ans = -1;
//	if((n == m && s >= 7) || (n < m)){
//		cout << "-1" << endl;
//		return 0;
//	}
	for(int i = 1; i <= s; i++){
		if(n * i >= s * m){
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}*/


// sap dat xau ki tu
int main(){
	string s;
	cin >> s;
	int cntMax = 0, cntAnother = 0;
	map<char, int>mp;
	for(int i = 0; i < s.size(); i++){
		mp[s[i]]++;
	}
	auto it = mp.end();
	for(auto p : mp){
		if(p.second > cntMax){
			cntMax = p.second; 
			it = mp.find(p.first);
		}
	}
	mp.erase(it);
	for(auto p : mp){
		cntAnother += p.second;
	}
	//cout << cntMax << " " << cntAnother << endl;
	if(cntMax <= cntAnother || cntMax == cntAnother + 1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}