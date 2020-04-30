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
		int n;
		cin>>n;
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}

		ll sum=0;
		int i=0;

		while(i<n)
		{
			if(v[i]>0)
			{
				ll local_mx=INT_MIN;
				while(v[i]>0 && i<n)
					local_mx=max(v[i],local_mx),i++;
				sum+=((local_mx==INT_MIN)?0:local_mx);
				//cout<<local_mx<<" ";
			}
			else
			{
				ll local_mx=INT_MIN;
				while(v[i]<0 && i<n)
					local_mx=max(v[i],local_mx),i++;
				//cout<<local_mx<<" ";
				sum+=((local_mx==INT_MIN)?0:local_mx);
			}
			//cout<<sum<<" ";
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
