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
		int n,x;
		cin>>n>>x;
		int odd=0,even=0,temp;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			if(temp==0)
				odd++;
			else
				even++;
		}
		if(odd==0)
		{
			cout<<"NO\n";
			continue;
		}
		if(x>=even)
		{
			int pairs = odd/2;
			if(odd%2==0)
			{
				
			}
		}

		
	}
	return 0;
}
