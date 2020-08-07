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
#include<stack>
#include<queue>
#include<chrono>
#include<unordered_map>
#include<unordered_set>

#define mod     1000000007
#define pi      3.1415926535897932384626433832795
#define fio     ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll      long long
#define ld      long double
#define pb      push_back
#define all(x)  x.begin(),x.end()
#define f       first
#define s       second
#define int     ll

using namespace std;
vector<ll> a(105);
vector<int> adj[105];
vector<bool> vis(105);
int n;

const ll P1 = 1931237034633205845;
const ll P2 = 1193829614179601806;

void dfs(int root,bool first)
{
	vis[root]=true;
	if(first)
		a[root] = P1;
	else
		a[root] = P2;
	//cout<<"a["<<root<<"]"<<" "<<a[root]<<endl;
	for(auto it:adj[root])
		if(!vis[it])
			dfs(it,!first);
}

main()
{
	fio
	int TC;
	cin>>TC;
	while(TC--)
	{
		int u,v;
		cin>>n;

		for(int i=0;i<n;i++)
			adj[i].clear();
		
		for(int i=0;i<n-1;i++)
			cin>>u>>v,adj[u-1].pb(v-1),adj[v-1].pb(u-1);

		fill(all(vis),false);
		dfs(0,false);
		
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;

	}
	return 0;
}
