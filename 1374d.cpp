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
#define f first
#define s second
#define int     ll

using namespace std;

main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,k,temp;
		cin>>n>>k;
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(temp%k!=0)
				m[k-temp%k]++;
		}
		if(m.size()==0)
		{
			cout<<0<<endl;
		}
		else
		{
			int ans=0;
			for(auto it:m)
				ans = max(ans,(it.s-1)*k+it.f+1);
			cout<<ans<<endl;

		}
	}
	return 0;
}
