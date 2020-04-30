#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

ll lcm(ll a,ll b)
{
	return a*b/__gcd(a,b);
}

int main()
{
	fio
	int TC;
	cin>>TC;
	while(TC--)
	{
		int n,m;
		cin>>n>>m;
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		ll l =v[0];

		for(int i=1;i<n;i++)
			l = lcm(l,v[i]);
		//cout<<"lcm "<<l<<endl;

		ll mx=1;
		int j=m;
		while(binary_search(v.begin(), v.end(),j) && j>=0)
			j--;

		if(j<=0)
		{
			cout<<1<<endl;
			continue;
		}
		mx=j;
		//cout<<"mx "<<mx;
		for(int i=j-1;i>0;i--)
		{
			
			if(!binary_search(v.begin(), v.end(),i))
				if(lcm(mx,l)<=lcm(i,l))
					mx = i;
		}
		cout<<mx<<endl;
		
	}
	return 0;
}
