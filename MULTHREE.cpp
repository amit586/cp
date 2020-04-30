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


ll power(ll a,ll n,ll p)
{
	ll ans=1;
	while(n>0)
	{
		if(a&1) ans=(ans*a)%p;
		n=n>>1;
		a = (a*a)%p;
	}
	return ans;
}


using namespace std;

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		ll k,d0,d1,p;
		cin>>k>>d0>>d1;
		p = (d1+d0);
		if(k>=2)
			((power(2,k-2,10)*p + p)%10)%3==0?cout<<"YES\n":cout<<"NO\n";
		else
			cout<<(p%3==0?"YES":"NO")<<endl;
		
	}
	return 0;
}