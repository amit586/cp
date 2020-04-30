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
	TC=1;
	//cin>>TC;
	while(TC--)
	{
		ll n,m;
		cin>>n>>m;
		ll sum=0;
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
			sum+=v[i];
		}
		
		int  cutoff  = ceil(((float)sum/(4.0*m)));

		int count = 0;
		for(int i=0;i<n;i++)
			if(v[i]>=cutoff)
				count++;
		if(count>=m)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		
	}
	return 0;
}
