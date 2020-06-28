#include<stdio.h>
#include<iostream>
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
#define maze vector<string> &
using namespace std;

bool isAllwoed(int i,int j,maze m,vector<vector<bool>> &vis)
{
	if(i>=0 and i <m.size() and j>=0 and j<m[0].size() and (!vis[i][j]) and (m[i][j]=='.' or m[i][j]=='G'))
	{
		int px[4]={i,i,i-1,i+1},py[4]={j+1,j-1,j,j};
		for(int k=0;k<4;k++)
		{
			if(px[k]>=0 and px[k]<m.size() and py[k]>=0 and py[k]<m[0].size() and m[px[k]][py[k]]=='B')
				return false;
		}
		return true;
	}
	return false;
}

bool searchPath(int i,int j,maze m,vector<vector<bool>> &vis)
{
	if(i==m.size()-1 and j==m[0].size()-1)
		return true;
	vis[i][j]=true;
	
	int px[4]={i,i,i-1,i+1},py[4]={j+1,j-1,j,j};

	for(int k=0;k<4;k++)
	{
		//cout<<px[k]<<" "<<py[k]<<" "<<isAllwoed(px[k],py[k],m,vis)<<endl;
		if(isAllwoed(px[k],py[k],m,vis))
		{
			if(searchPath(px[k],py[k],m,vis))
				return true;
		}
	}
	//cout<<endl;
	vis[i][j]=false;
	return false;
}

bool findPath(int i,int j,maze m)
{

	vector<vector<bool>> vis(m.size(),vector<bool> (m[0].size(),0));
	int px[4]={i,i,i-1,i+1},py[4]={j+1,j-1,j,j};
	for(int k=0;k<4;k++)
		if(px[k]>=0 and px[k]<m.size() and py[k]>=0 and py[k]<m[0].size() and m[px[k]][py[k]]=='B')
			return false;
	return searchPath(i,j,m,vis);

}

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,m;
		cin>>n>>m;
		std::vector<string> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];

		vector<pair<int,int> > good;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				if(v[i][j]=='G')
					good.pb(make_pair(i,j));
		}

		if(good.size()==0)
		{
			cout<<"YES\n";
			continue;
		}

		int i=0;
		for(;i<good.size();i++)
		{
			if(!findPath(good[i].f,good[i].s,v))
				break;
		}

		if(i==good.size())
			cout<<"YES\n";
		else
			cout<<"NO\n";

		
	}
	return 0;
}
