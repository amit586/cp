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




main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> a(n),w(k);
		set<int> happy;
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<k;i++)	cin>>w[i],happy.insert(i);
		set<int> s[k];
		int i=n-1;
		sort(all(a));
		sort(all(w));
		vector<int> del;

		for(auto it:happy)
		{
			s[it].insert(a[i--]);
			w[it]--;
			if(w[it]==0)
				del.push_back(it);
		}
		for(auto it:del)
			happy.erase(it);
		del.clear();
		for(auto it:happy)
			while(w[it]--)
				s[it].insert(a[i--]);
				
		int ans=0;
		for(int i=0;i<k;i++)
		{
			// for(auto it:s[i])
			// 	cout<<it<<" ";
			// cout<<endl;
			ans+=(*(s[i].begin()) + *(s[i]).rbegin());
		}
		cout<<ans<<endl;		
	}
	return 0;
}
