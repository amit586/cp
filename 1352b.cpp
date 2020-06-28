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
		if(k>n || (n%2==1 && k%2==0))
		{
			cout<<"NO\n";
			continue;
		}
		if(k==1)
		{
			cout<<"YES\n";
			cout<<n<<endl;
			continue;
		}

		vector<ll> ans(k);
		ll sum=0;
		
		for(int i=0;i<k-1;i++)
		{
			ans[i]=1;
			sum+=ans[i];
		}
		ans[k-1] = n-sum;

		if(ans[k-1]>0 && ans[k-1]%2==1)
		{
			cout<<"YES\n";
			for(int i=0;i<k;i++)
				cout<<ans[i]<<" ";
			cout<<endl;
		}
		else
		{
			sum=0;
			for(int i=0;i<k-1;i++)
			{	ans[i]=2;
				sum+=2;
			}
			ans[k-1]=n-sum;
			if(ans[k-1]>0 && ans[k-1]%2==0)
			{
				cout<<"YES\n";
				for(int i=0;i<k;i++)
					cout<<ans[i]<<" ";
				cout<<endl;
			}else
				cout<<"NO\n";
		}
		
	}
	return 0;
}
