#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
#define P 1000000007

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

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,a;
		cin>>n>>a;
		vector<ll > v(n,a);
		vector<ll> pi(n+1,a),ai(n+1,a);
		pi[0]=a;
		ai[0]=a;
		ll sum=a;
		for(int i=1;i<n;i++)
		{
			ai[i]=((ai[i-1]%P)*(pi[i-1]%P))%P;
			pi[i]=power(ai[i],2*i+1,P);
			sum=(P+sum+pi[i])%P;
		}
		cout<<sum<<endl;
	}
	return 0;
}
