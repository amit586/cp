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
	ll ans = 1;
	while(n)
	{
		if(n&1) ans = (ans*a)%p;
		n >>=1;
		a = (a*a)%p;
	}
	return ans;
}

ll fact(ll n , ll r , ll p)
{
	ll ans = 1;
	for(ll i=n;i>r;i--)
		ans = (ans*i)%p;
	return ans;
}

ll ncr(ll n,ll r , ll p)
{
	if(r>n/2) r = n-r;
	ll num = fact(n,n-r,p);
	ll den = fact(r,1,p);
	ll inv_d = power(den,p-2,p);
	//cout<<"num "<<num<<" den "<<den<<" inv_d "<<inv_d<<endl;

	return (num*inv_d)%p;
}

int main()
{
	fio
	int TC;
	// cin>>TC;
	TC=1;
	while(TC--)
	{
		ll n,a,b;
		cin>>n>>a>>b;
		//cout<<(P + power(2,n,P)-ncr(n,b,P)-ncr(n,a,P)-1)%P<<endl;
		ll res = power(2,n,P)-1;
		ll rej = (ncr(n,b,P)+ncr(n,a,P))%P;
		rej = P-rej;
		res = (res +rej)%P;
		cout<<res<<endl;
					
	}
	return 0;
}
