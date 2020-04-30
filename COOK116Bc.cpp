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

int find1(ll a,ll b)
{
	int ans=0;
	while(a && b)
	{
		//cout<<"a&1 "<<((int)a&1)<<" b&1 "<<((int)b&1)<<endl;
		if(((int)a&1)==0 &&  ((int)b&1)==1)
		{
			ans = -1;
			break;
		}
		else if(a&1 && b&1)
			ans++;

		a=a>>1;
		b=b>>1;
	}
	return ans;
}


int main()
{
	fio
	int TC;
	cin>>TC;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v;
		ll temp;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			v.push_back(temp);
		}
		long long ans = 1;
		for(int i=1;i<n;i++)
		{
			int p = find1(v[i],v[i-1]);
			//cout<<'p'<<p<<endl;
			if(p==-1)
			{
				ans = 0;
				break;
			}
			ans = ((ans%P)*(power(2,p,P)%P))%P;
		}
		cout<<ans<<endl;		
	}
	return 0;
}
