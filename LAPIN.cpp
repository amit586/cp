#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

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
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		string s;
		cin>>s;
		int n = s.size();
		if(n==1)
		{
			cout<<"YES\n";
			continue;
		}
		unordered_map<char,int> freql,freqr;
		if(n%2==0)
		{
			for(int i=0;i<n/2;i++)
				freql[s[i]]++;
			for(int i=n/2;i<n;i++)
				freqr[s[i]]++;
			bool lapin=true;
			for(auto it:freql)
			{
				if(freqr.find(it.first)==freqr.end() || freqr[it.first]!=it.second)
					{lapin=false;break;}
			}
			lapin?cout<<"YES\n":cout<<"NO\n";

		}
		else
		{
			for(int i=0;i<n/2;i++)
				freql[s[i]]++;
			for(int i=n/2+1;i<n;i++)
				freqr[s[i]]++;
			bool lapin=true;
			for(auto it:freql)
			{
				if(freqr.find(it.first)==freqr.end() || freqr[it.first]!=it.second)
					{lapin=false;break;}
			}
			lapin?cout<<"YES\n":cout<<"NO\n";


		}
		
	}
	return 0;
}
