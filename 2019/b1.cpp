#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		ll n,p,k;
		cin>>n>>p>>k;
		
		ll arr[n];
		
		f(i,0,n) cin>>arr[i];

		sort(arr,arr+n);

		ll prefix = 0,ans = 0;

		for(int i=0;i<=k;i++)
		{
			ll sum = prefix;
			if(sum>p) break;
			ll count = i;
			for(int j=i+k-1;j<n;j+=k)
			{
				if(sum+arr[j]<=p)
				{
					sum+=arr[j];
					count+=k;
				}
				else 
				{
					break;
				}
			}
			ans = max(count,ans);
			prefix+=arr[i];
		}
		cout<<ans<<endl;

	}
}