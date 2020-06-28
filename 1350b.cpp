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
		int n;
		cin>>n;
		std::vector<ll> s(n+1);
		for (int i = 1; i <= n; ++i)
			cin>>s[i];
		vector<ll> dp(n+1,1);
		ll mx=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i*2;j<=n ;j+=i)
				if(s[i]<s[j])
					dp[j]=max(dp[j],1+dp[i]);
			mx = max(mx,dp[i]);
		}
		cout<<mx<<endl;
		
	}
	return 0;
}
