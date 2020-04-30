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
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,x;
		cin>>n>>x;
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		sort(v.begin(),v.end(),greater<ll>());
		vector <ll> prefix(n);
		prefix[0] = v[0];
		for(int i=1;i<n;i++)
		{
			prefix[i] = v[i]+prefix[i-1];
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(prefix[i]/(i+1) >= x)
				count++;
			else
				break;
		}
		cout<<count<<endl;
		
	}
	return 0;
}
