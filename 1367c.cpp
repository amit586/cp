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
		int n,k,local_d=0,seated=0;
		cin>>n>>k;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
				local_d++;
			else
			{
				if(local_d-i==0)
					seated += max(local_d/(k+1),0);
				else
				{
					if(local_d%(k+1)!=k)
						seated+=max((local_d/(k+1))-1,0);
					else if(local_d%(k+1)==k)
						seated+=max(local_d/(k+1),0);
				}
				local_d=0;
			}
		}
		seated+=max(local_d/(k+1),0);
		if(local_d==s.size() and local_d<(k))
			cout<<1<<endl;
		else if(local_d==s.size())
			cout<<local_d/(k+1)+(int)(local_d%(k+1)!=0)<<endl;
		else 
			cout<<seated<<endl;
		
	}
	return 0;
}
