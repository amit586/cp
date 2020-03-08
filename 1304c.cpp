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
	int T;
	cin>>T;
	while(T--)
	{
		ll n,m1;
		cin>>n>>m1;
		map <ll , pair<ll,ll> > m;
		m[0]=make_pair<ll,ll>((long long)m1,(long long)m1);
		f(i,0,n)
		{
			ll ti,li,hi;
			cin>>ti>>li>>hi;
			auto p_ = m.find(ti);
			if(p_==m.end())
				m[ti]=make_pair<ll,ll>((long long)li,(long long)hi);
			else
			{
				p_->second.first = max(p_->second.first,li);
				p_->second.second = min(p_->second.second,hi);
			}
		}
		
		ll lb=m1,up=m1;
		auto it_p = m.begin();
		bool flag=true;
		auto it=m.begin();
		it++;
		for(;it!=m.end();it++)
		{
			lb -= (it->first-it_p->first);
			up +=(it->first - it_p->first);
			if(lb < it->second.first)
				lb=it->second.first;
			if(up>it->second.second)
				up  = it->second.second;

			if(lb>it->second.second || up<it->second.first)
			{
				flag=false;
				break;
			}
			it_p = it;
		}
		flag?cout<<"YES\n":cout<<"NO\n";			
	}
	return 0;
}
