#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second

struct myhash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
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
	//fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v(n);
		ll mn = n;
		for (int i = 0; i < n; ++i)
			cin>>v[i],mn = min(v[i],mn);
		mn = (10+abs(mn/n))*n;
		unordered_set<ll> s;
		bool ans = true;
		for(int i=0;i<n;i++)
		{
			ll md = (mnv[i]+i)%n;
			if(s.find(md)==s.end())
				s.insert(md);
			else
			{
				ans = false;
				break;
			}
		}
		ans?cout<<"YES\n":cout<<"NO\n";
				
	}
	return 0;
}
