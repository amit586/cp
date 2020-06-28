#include<bits/stdc++.h>
//#define M 999998727899999
#define M 1000000007
#define P 31
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
using namespace std;

int in(char c)
{
	return c-'a'+1;
}


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
		string s;
		cin>>s;
		int n= s.length();
		ll h1 = 0,h2=0;
		ll pot = 1;
		for(int i=0;i<n/2;i++)
		{
			h1 =(M+pot*in(s[i])%M + h1)%M;
			
			pot=(M+P*pot)%M;
		}
		pot=1;		
		for(int i=n/2;i<n;i++)
		{
			h2 = (M+pot*in(s[i])%M + h2)%M;
			pot = (M+P*pot)%M;
		}
		ll h = 1;
		for(int i=0;i<n/2-1;i++)
			h = (M+h*P)%M;	
		pot=1;
		int ans=0,l=n/2;
		ll inv31 = power(P,M-2,M);
		for(int i=0;i<n/2-1;i++)
		{
			h1 = (M+(h1-in(s[i]))*inv31)%M;
			h1 = (M+h1+(h*in(s[i+l]))%M)%M;

			h2 = (M+h2 + (pot*(M+in(s[i])-in(s[i+l])))%M)%M;
			pot =(P*pot+M)%M;
			if(h1==h2)
			{
				//cout<<h1<<" "<<h2<<" "<<i<<endl;
				ans++;
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}
