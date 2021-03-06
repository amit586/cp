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
		int n,k;
		cin>>n>>k;
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		int l=0,peaks=0;

		for(int i=1;i<k-1;i++)
			if(v[i]>v[i+1] && v[i]>v[i-1])
				peaks++;
		int mx_peak=peaks;
		for(int i=k;i<n;i++)
		{
			if(v[i-1]>v[i] && v[i-1]>v[i-2])
				peaks++;
			if(v[i-k+1]>v[i-k] && v[i-k+1]>v[i-k+2])
				peaks--;
			if(peaks>mx_peak)
				mx_peak=peaks,l=i-k+1;
		}
		cout<<mx_peak+1<<" "<<l+1<<endl;	
		
	}
	return 0;
}
