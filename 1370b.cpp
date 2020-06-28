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
		int n,x;
		cin>>n;
		vector<ll> oddInd,evenInd;
		for (int i = 0; i < 2*n; ++i)
		{
			cin>>x;
			if(x%2==0)
				evenInd.pb(i+1);
			else
				oddInd.pb(i+1);
		}
		//cout<<endl;
		int start1,start2;
		
		if(oddInd.size()%2==0)
			if(evenInd.size()!=0)
				start1=0,start2=2;
			else
				start1=2,start2=0;
		else
			start1=start2=1;
		//cout<<"odd\n";
		for(int i=start1;i<oddInd.size();i+=2)
				cout<<oddInd[i]<<" "<<oddInd[i+1]<<'\n';
		//cout<<"even\n";
		for(int i=start2;i<evenInd.size();i+=2)
			cout<<evenInd[i]<<" "<<evenInd[i+1]<<'\n';
		//cout<<endl;
	}
	return 0;
}
