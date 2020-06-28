#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
using namespace std;

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		ll n;
		cin>>n;
		if(__builtin_popcount(n)==1)
		{
			cout<<-1<<endl;
			continue;
		}

		ll base=1;
		ll ans=0;
		while(n>0)
		{
			ans+=(n+1)/2*base;
			n = n/2;
			base*=2;
		}
		cout<<ans-1<<endl;
		//cout<<x<<" "<<y<<" "<<pc<<" "<<ans<<endl;

		
	}
	return 0;
}
