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

struct myhash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = std::chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};


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
		map<ll,ll> m;
		vector<ll> p(n);
		for(int i=0;i<n;i++)
			cin>>p[i],m[p[i]]=i;
		vector<ll> adj[n];
		int u,v;
		for(int i=0;i<n-1;i++)
			cin>>u>>v,adj[u-1].pb(v-1),adj[v-1].pb(u-1);

		for(int i=0;i<n;i++)
		{
			m.erase(p[i]);
			for(auto it:adj[i])
				m.erase(p[it]);
			if(m.size()==0)
				cout<<0<<" ";
			else
				cout<<(*m.rbegin()).s+1<<" ";
			m[p[i]]=i;
			for(auto it:adj[i])
				m[p[it]]=it;
		}
		cout<<endl;
		

		
	}
	return 0;
}
