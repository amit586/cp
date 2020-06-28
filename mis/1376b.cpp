#include <bits/stdc++.h>

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



main()
{
	fio
	int n,m,u,v;
	ifstream in;
	ofstream out;
	in.open("b2.in");
	out.open("b2ans.txt");
	in>>n>>m;
	list<int> adj[n];
	for(int i=0;i<m;i++)
	{
		in>>u>>v;
		adj[u-1].pb(v-1);
		adj[v-1].pb(u-1);
	}
	vector<bool> vis(n,false);
	vector<int> ans(n,0);
	int ind=0;
	for(int i=0;i<n;i++)
	{
		countind(i,adj,n);
	}
	out<<ind<<endl;
	for(int i=0;i<ans.size();i++)
		out<<ans[i]<<" ";
	out.close();
	in.close();
	return 0;
}
