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
		ll n,k;
		cin>>n>>k;
		if(n>k)
		{
			cout<<k<<endl;
			continue;
		}
		ll ans = (n*k)/(n-1);
		if(ans%n==0)
			cout<<ans-1<<endl;
		else
			cout<<ans<<endl;

	}
	return 0;
}
