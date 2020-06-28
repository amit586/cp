#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second

using namespace std;

int solve(vector<ll> &v,int n)
{
	sort(all(v));
	int g=1,i=0;
	while(i<n)
	{
		if(v[i]<=g)
		{
			g++;
			i++;
		}

		else
		{
			ll g_ = g;
			cout<<v[i-1]<<" "<<g_<<" "<<i<<endl;
			while(v[i]>g_ && i<n)
			{
				g_++;
				i++;
			}
			cout<<v[i-1]<<" "<<g_<<" "<<i<<endl;
			if(v[i-1]<g_)
				g_=g;
			else 
				return g;

		}
	}
	return g;
}

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v(n+1,0);
		int x=n,y=0;
		for(int i=1;i<=n;i++)
		{
			cin>>v[i];
		}
		sort(all(v));
		int i=n;
		for(;i>=1;i--)
		{
			//cout<<v[i]<<" "<<i<<endl;
			if(v[i]<=i)
				break;
		}
		cout<<i+1<<endl;
		//cout<<solve(v,n)<<endl;
		

		
	}
	return 0;
}
