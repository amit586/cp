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
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v(n+1);
		for (int i = 1; i <= n; ++i)
		{
			cin>>v[i];
		}

		vector <ll > presum(n+1,0);
		for(int i=1;i<n+1;i++)
			presum[i]=v[i]+presum[i-1];

		vector <pair<int,int>> sol;
		for(int i=1;i<=n;i++)
		{
			if(presum[i]==((i*(i+1))/2) && (presum[n]-presum[i])==((n-i)*(n-i+1))/2)
			{
				
				vector <int> pre1(i+1,0),pre2(n-i+1,0);
				
				for(int j=1;j<=i;j++)
					pre1[j]++;
				for(int j=i+1;j<=n;j++)
					pre2[j-i]++;
				int j=1;
				
				for(;j<=i;j++)
					if(pre1[j]!=1)
						break;
				if(j==i+1)
				{
					for(;j<=n;j++)
					{
						//cout<<pre2[j-i]<<endl;	
						if(pre2[j-i]!=1)
							break;
					}
					//cout<<"j2 "<<j<<endl;
					if(j==n+1 && i && n-i)
						sol.push_back({i,n-i});
				}	
			}
		}
		cout<<sol.size()<<endl;
		if(sol.size())
		{
			for(int i=0;i<sol.size();i++)
				cout<<sol[i].first<<" "<<sol[i].second<<endl;
		}
		//cout<<endl<<endl;
		// else
		// 	cout<<0<<endl;

		
	}
	return 0;
}
