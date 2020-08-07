#include <bits/stdc++.h>
using namespace std;


int inTime;

void dfs(int u,int parent,
	std::vector<bool> &vis,
	std::vector<int> &tin,
	std::vector<int> &low,
	std::vector<pair<int,int>> &bridges,
	std::vector<int> adj[])
{
	vis[u]=true;
	tin[u]=low[u]=inTime++;

	for(auto v:adj[u])
	{
		if(v==parent)
			continue;
		if(vis[v])
			low[u]=min(low[u],tin[v]);
		else{
			dfs(v,u,vis,tin,low,bridges,adj);
			
			if(low[v]>tin[u])
				if(u>v)
					bridges.push_back(make_pair(v,u));
				else
					bridges.push_back(make_pair(u,v));
			low[u]=min(low[u],low[v]);
		}
	}

}





int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	for(int z=1;z<=tc;z++)
	{
		int N,E,u,v;
		cin>>N>>E;
		vector<pair<int,int>> bridges;

		vector<bool> vis(N+1,false);
		vector<int> tin(N+1,-1);
		vector<int> low(N+1,-1);
		vector<int> adj[N+1];
		
		bridges.clear();
		inTime = 0;

		for(int i=0;i<E;i++)
			cin>>u>>v,adj[u].push_back(v),adj[v].push_back(u);
		
		for(int i=1;i<=N;i++)
			if(!vis[i])
				dfs(i,-1,vis,tin,low,bridges,adj);

		cout<<"Caso #"<<z<<endl;
		if(bridges.size()==0)
		{
			cout<<"Sin bloqueos"<<endl;
			continue;
		}
		sort(bridges.begin(),bridges.end());
		cout<<bridges.size()<<endl;
		for(auto it: bridges)
			cout<<it.first<<" "<<it.second<<endl;

	}

	return 0;
}