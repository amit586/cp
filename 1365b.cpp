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




int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,c0=0,c1=0;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n;i++)	cin>>b[i],(b[i]==0?c0+=1:c1+=1);

		if(n==1)
		{
			cout<<"YES\n";
			continue;
		}
		if(c0==0 or c1==0)
		{
			int i=1;
			for(;i<n;i++)
				if(a[i-1]>a[i])
					break;
			if(i==n)
				cout<<"YES\n";
			else
				cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		continue;
	}
	return 0;
}
