#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
using namespace std;

bool diff(int s,int d,vector<int> *g,int n,bool vis[],int a[],vector<int> &ele)
{
	vis[s]=true;
	if(s==d)
		return true;
	for(auto it:g[s])
	{
		if(!vis[it])
		{
			if(diff(it,d,g,n,vis,a,ele))
			{
				ele.push_back(a[it]);			
				return true;
			}
		}
	}
	return false;
}

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int> g[n];
		int u,v;
		for(int i=0;i<n-1;i++)
		{
			cin>>u>>v;
			g[u-1].push_back(v-1);
			g[v-1].push_back(u-1);
		}
		while(q--)
		{
			int s,d;
			cin>>s>>d;
			s--,d--;
			//cout<<s<<"   "<<d<<endl;
			bool vis[n]={false};
			vector<int> ele;
			ele.push_back(a[s]);
			diff(s,d,g,n,vis,a,ele);
			sort(all(ele));
			int min_diff = 100000000;
			for(int i=1;i<ele.size();i++)
				min_diff=min(min_diff,abs(ele[i]-ele[i-1]));
			cout<<min_diff<<endl;
		}
	}
	return 0;
}
