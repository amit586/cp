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
	// cin>>TC;
	TC=1;
	while(TC--)
	{
		ll n,m;
		cin>>n>>m;
		std::vector<ll> v(n);
		ll sum=0;
		for (int i = 0; i < m; ++i)
		{
			cin>>v[i],sum+=v[i];
		}
		(n-sum)>=0?cout<<n-sum<<endl:cout<<-1<<endl;
		
	}
	return 0;
}
