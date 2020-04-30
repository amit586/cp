#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

ll power(ll a,ll n,ll p)
{
	// returns a^n % p;
	ll ans=1;
	while(n>0)
	{
		if(n&1)  
			ans=(ans*a)%p;
		n>>=1;
		a = (a*a)%p;
	}
	return ans;
}

ll compute(map<ll,ll>&freq,ll x,ll i,ll p,ll n)
{
	ll ans;
	if(x>=n)
		ans= i;
	else if(freq.count(i)==0)
		ans = (i*(power(2,n-x,p)) +p)%p;
	else
	{
		ans = ((power(2,n-x-freq[i],p))*i +p)%p+ (((power(2,freq[i],p)-1+p)%p)*((p+compute(freq,x+freq[i],i+1,p,n))%p))%p;
	}
	//cout<<ans<<" i:"<<i<<endl;
	return ans;
}


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
		std::vector<ll> v(n);
		map<ll,ll> freq;
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
			freq[v[i]]++;
		}
		ll p = 998244353;
		cout<<(compute(freq,0,1,p,n)+p)%p<<endl;
		
	}
	return 0;
}
