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

std::vector<ll> v(200010),hash(200010);


main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,temp,mx=INT_MIN;
		bool flag=false;
		cin>>n;
		map<int,int> m;

		for(int i=0;i<n;i++)
		{
			cin>>temp;
			mx= max(mx,temp);
			m[temp]++;
			if(m[temp]>2)
				flag=true;
		}

		if(m[mx]>1 or flag)
		{
			cout<<"NO\n";
			continue;
		}

		cout<<"YES\n";
		for(auto it=m.begin();it!=m.end();++it)
			cout<<it->first<<" ",m[it->first]--;
		for(auto it=m.rbegin();it!=m.rend();++it)
			if(m[it->first]>0)
				cout<<it->first<<" ";
		cout<<endl;
	}
	return 0;
}
