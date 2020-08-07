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


main()
{
	fio
	int n,k,t,la,lb;
	cin>>n>>k;
	vector<int> ab,a,b;
	for(int i=0;i<n;i++)
	{
		cin>>t>>la>>lb;
		if(la==lb and la==1)
			ab.pb(t);
		else if(la==1 and lb==0)
			a.pb(t);
		else if(la==0 and lb==1)
			b.pb(t);
	}
	if(ab.size()+min(a.size(),b.size())<k)
		cout<<-1<<endl;
	else
	{
		sort(all(ab)),sort(all(a)),sort(all(b));

		int l = min(a.size(),b.size());
		int x=0,y=0;
		ll sum=0;
		//cout<<"s:"<<ab.size()<<" "<<l<<endl;
		for(int i=0;i<k;i++)
		{
			if(x==ab.size())
				sum+=(a[y]+b[y]),y++;
			else if(y==l)
				sum+=ab[x++];
			else if(ab[x]<=(a[y]+b[y]))
				sum+=ab[x++];
			else if(ab[x]>a[y]+b[y])
				sum+=(a[y]+b[y]),y++;
			//cout<<"xy:"<<x<<" "<<y<<endl;
		}
		cout<<sum<<endl;
	}

	return 0;
}
