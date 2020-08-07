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

int max(int a,int b,int c)
{
	return max(a,max(b,c));
}

main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,k,z;
		cin>>n>>k>>z;
		std::vector<ll> v(n),pref(n,0),mx(n,0);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		pref[0] = v[0];
		for(int i=1;i<=k;i++)
			pref[i]=v[i]+pref[i-1],mx[i] = max(mx[i-1],v[i]+v[i-1]);

		// cout<<"pref \n"<<endl;
		// for(int i =0;i<=k;i++)
		// 	cout<<pref[i]<<" ";
		// cout<<endl;
		// cout<<"mx \n"<<endl;
		// for(int i=0;i<=k;i++)
		// 	cout<<mx[i]<<" ";
		// cout<<endl;

		if(z==0)
		{
			cout<<pref[k]<<endl;
			continue;
		}
		vector <int> ans;
		ans.pb(pref[k]);
		if(z>0)
		{
			
		}
		// int mx_ = max(pref[k],pref[k-1]+v[k-1],pref[k-2]+mx[k-2]);
		// z--;
		// if(mx_ == pref[k-1]+v[k-1])
		// 	k--;
		// else if(mx_ == pref[k-2]+mx[k-2])
		// 	k = k-2;
		// while(z>0 and k>=2)
		// {
		// 	mx_ = max(mx_,pref[k-2]+mx[k-2]);
		// 	k = k-2;
		// 	z--;
		// }
		cout<<mx_<<endl;
		//cout<<"ans"<<mx_<<endl;
		
	}
	return 0;
}
