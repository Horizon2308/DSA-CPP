#include <bits/stdc++.h>
using namespace std;
//pair<datatype1,datatype2>p;
//p.first
//p.second
//make_pair
//tuple
//get<idx>(p)
int main()
{
	/*pair<int,int>p=make_pair(1,2);
	cout<<p.first<<endl;
	cout<<p.second<<endl;*/
	tuple <int,int,int>t={1,2,3};
	cout<<get<1>(t);
	return 0;
}