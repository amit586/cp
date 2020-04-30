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
	//TC=1;
	while(TC--)
	{
		ll n,q;
		cin>>q>>n;
		vector<pair<int,int>> v(n+1);
		ll fi,di;
		v[0]={0,0};
		for(int i=1;i<=n;i++)
			cin>>fi>>di,v[i]={fi,di};

		ll floors=0;
		for(int i=1;i<=n;i++)
			floors+=(abs(v[i].first-v[i].second) + abs(v[i-1].second-v[i].first));
		cout<<floors<<endl;
		
	}
	return 0;
}
