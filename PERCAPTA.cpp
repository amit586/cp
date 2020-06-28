#include<stdio.h>
#include<iostream>
#include<climits>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<queue>
#include<chrono>
#include<unordered_map>
#include<unordered_set>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
#define int ll
using namespace std;

vector<vector<ll>> adj(200005);
ll a[200005],b[200005],vis[200005],inc[200005];
vector<ll> prov,res;

void dfs(int i)
{
	vis[i]=1;
	prov.pb(i);
	for(auto it:adj[i])
		if(vis[it]==0 and inc[it]==1)
			dfs(it);
}

main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		res.clear();
		int n,m,u,v;
		cin>>n>>m;
		for(int i=0;i<n;i++) adj[i].clear(),vis[i]=0,inc[i]=0,cin>>a[i];
		for(int i=0;i<n;i++)	cin>>b[i];
		for(int i=0;i<m;i++) 	cin>>u>>v,adj[u-1].pb(v-1),adj[v-1].pb(u-1);

		int num = a[0],den=b[0];
		for(int i=1;i<n;i++)
			if(a[i]*den>b[i]*num)
				num  = a[i],den=b[i];
		for(int i=0;i<n;i++)
			inc[i] = (a[i]*den==num*b[i])?1:0;
		for(int i=n-1;i>=0;i--)
		{
			if(vis[i]==0 and inc[i]==1)
			{
				prov.clear();
				dfs(i);
				//cout<<"prov: "<<prov.size()<<" res: "<<res.size()<<endl;
				if(prov.size()>res.size())
				{
					res.clear();
					res=prov;
				}
			}
		}

		cout<<res.size()<<endl;
		for(int i=0;i<res.size();i++)
			cout<<res[i]+1<<" ";
		cout<<endl;
	}
	return 0;
}
