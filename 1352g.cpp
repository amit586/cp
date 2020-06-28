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
		int n;
		cin>>n;
		if(n<=3)
		{
			cout<<-1<<endl;
			continue;
		}
		vector<int> ans(n);
		ans[0]=n;
		if(n%2==1)
		{
			for(int i=1;i<=n/2;i++)
			{
				ans[i] =ans[i-1]-2;
			}
			ans[n/2+1]=2;
			swap(ans[n/2],ans[n/2-1]);
			for(int i=n/2+2;i<n;i++)
				ans[i]=ans[i-1]+2;
			for(int i=0;i<n;i++)
				cout<<ans[i]<<" ";
			cout<<endl;
		}
		else
		{
			for(int i=1;i<n/2;i++)
			{
				ans[i] =ans[i-1]-2;
			}
			ans[n/2]=2;
			swap(ans[n/2],ans[n/2-2]);
			for(int i=n/2+1;i<n;i++)
				ans[i]=ans[i-1]+2;
			for(int i=0;i<n;i++)
				cout<<ans[i]<<" ";
			cout<<endl;
		}
		
	}
	return 0;
}
