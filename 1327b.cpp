#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
#define pb push_back
using namespace std;


void  solve(vector<int> g[],int n)
{
	vector<bool> mPrincess(n+1,false);
	vector<bool> mPrince(n+1,false);
	for(int i=1;i<=n;i++)
		for(auto it:g[i])
			if(!mPrince[it])
			{
				mPrince[it]=true;
				mPrincess[i]=true;
				break;
			}
	for(int i=1;i<n+1;i++)
	{
		if(!mPrincess[i])
		{
			for(int j=1;i<n+1;j++)
			{
				if(!mPrince[j])
				{
					cout<<"IMPROVE\n";
					cout<<i<<" "<<j<<endl;
					return;
				}
			}
		}
	}
	cout<<"OPTIMAL\n";
	return ;

}	

int main()
{
	fio
	int TC;
	cin>>TC;
	while(TC--)
	{
		int n;
		cin>>n;
		vector<int> g[n+1];
		int l,temp;
		for(int i=1;i<=n;i++)
		{
			cin>>l;
			for(int j=0;j<l;j++)
				cin>>temp,g[i].pb(temp);
		}

		// for(int i=1;i<=n;i++)
		// {
		// 	for(int j=0;j<g[i].size();j++)
		// 		cout<<g[i][j]<<" ";
		// 	cout<<endl;
		// }
		solve(g,n);
		
	}
	return 0;
}
