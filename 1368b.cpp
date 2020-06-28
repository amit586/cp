#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<queue>
#include<chrono>
#include<unordered_map>
#include<unordered_set>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
using namespace std;
vector<int> v(10,1);

ll count()
{
	ll ans=1;
	for(int i=0;i<10;i++)
		ans*=v[i];
	return ans;
}

int main()
{
	fio
	ll k;
	cin>>k;
	string a = "codeforces";
	int p=0;
	while(count()<k)
	{
		v[p++]++;
		p%=10;
	}
	for(int i=0;i<10;i++)
		for(int j=0;j<v[i];j++)
			cout<<a[i];
	cout<<endl;
	return 0;
}
