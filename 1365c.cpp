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
	//cin>>TC;
	TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		int a[n+1],b[n+1],posa[n+1],posb[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i],posa[a[i]]=i;
		for(int i=1;i<=n;i++)
			cin>>b[i],posb[b[i]]=i;

		int cd[n+1],fd[n+1]={0};
		for(int i=1;i<=n;i++)
		{
			if(posb[i]-posa[i]>=0)
				cd[i]=posb[i]-posa[i];
			else
				cd[i]=posb[i]-posa[i]+n;
			//cout<<posa[i]<<" "<<posb[i]<<" "<<i<<endl;
			fd[cd[i]]++;
		}
		int mxd = -10000000;
		for(int i=0;i<=n;i++)
			mxd = max(mxd,fd[i]);//,cout<<fd[i]<<" ";
		cout<<mxd<<endl;

		
	}
	return 0;
}
