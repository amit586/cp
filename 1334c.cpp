#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		vector<ll> ai(n);
		vector<ll> bi(n);
		for (int i = 0; i < n; ++i)
			cin>>ai[i]>>bi[i];

		ll ans= 0;
		ll mn = 1e18;
		for(int i=0;i<n;i++)
		{
			int ni = (i+1)%n;
			ll val = min(ai[ni],bi[i]);
			ans+=ai[ni] -val;
			mn = min(mn,val);
		}
		ans+=mn;
		cout<<ans<<endl;
		
	}
	return 0;
}
