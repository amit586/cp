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
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		f(i,0,n) cin>>arr[i];
		ll i=1,sum=arr[0];
		while(i<n && sum>0)
		{
			sum+=arr[i];
			i++;	
		}
		//cout<<" i1 : "<<i<<endl;
		if(sum<=0)
		{
			cout<<"NO\n";
			continue;
		}
		i=n-2;
		sum=arr[n-1];
		while(i>=0 && sum>0)
		{
			sum+=arr[i];
			i--;
		}
		//cout<<" i2 : "<<i<<endl;
		if(sum<=0)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
	}
}
