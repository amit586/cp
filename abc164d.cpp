#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define MOD 2019
using namespace std;

int main()
{
	fio
	string s;
	cin>>s;
	int n = s.size();
	int hash[MOD]={0};
	ll val=0,pot=1;
	hash[val]=1;
	int ans=0;
	for(int i=n-1;i>=0;i--)
	{
		val = (val + (s[i]-'0')*pot)%MOD;
		pot = (pot*10)%MOD;
		ans+=hash[val];
		hash[val]++;
	}
	cout<<ans<<endl;
	return 0;
}
