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
	//cin>>TC;
	TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];

		vector<ll> prefix(n+1,0);

		for(int i = 0;i<n;i++ )
			prefix[i+1]=v[i]+prefix[i];
		ll ans = 0;
		set<ll> s={0};
		int begin=0, end=0;

		while(begin<n)
		{
			while(end<n && !s.count(prefix[end+1]))
			{
				end++;
				s.insert(prefix[end]);
			}
			ans+=(end-begin);
			s.erase(prefix[begin]);
			begin++;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
