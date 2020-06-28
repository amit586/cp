#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<queue>
#include<chrono>
#include<unordered_map>
#include<unordered_set>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
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


bool solve(ll n)
{
	if(n==1)
		return 0;
	if(n%2==1)
		return 1;
	if(n%2==0)
	{
		if(n==2)
			return 1;
		
		ll o,x=1,n1=n;
		while(n1 and n1%2==0)
			n1=n1/2,x*=2;
		if(x==n)
			return 0;
		if(n/x > 1 and x>2)
			return 1;
		if(n/2>1 and x==2)
		{
			for(int i=3;i<=sqrt(n/2);i+=2)
			{
				if(n%i==0)
					return 1;
			}
			return 0;
		}

	}
}

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		ll n;
		cin>>n;
		solve(n)?cout<<"Ashishgup":cout<<"FastestFinger";
		cout<<endl;		
	}
	return 0;
}
