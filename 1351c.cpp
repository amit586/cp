#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first


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
		string path;
		cin>>path;
		n = path.size();
		set<pair<pair<ll,ll>,pair<ll,ll>>> s;
		pair<ll,ll> prev = make_pair(0,0),current=make_pair(0,0);
		ll time = 0;
		for(int i=0;i<n;i++)
		{
			if(path[i]=='N')
				current.first+=1;
			else if(path[i]=='S')
				current.first-=1;
			else if(path[i]=='E')
				current.second+=1;
			else if(path[i]=='W')
				current.second-=1;
			
			if(s.find(make_pair(prev,current))==s.end())
			{
				//cout<<prev.first<<" "<<prev.second<<" "<<current.first<<" "<<current.second<<endl;
				s.insert(make_pair(prev,current));
				s.insert(make_pair(current,prev));
				prev=current;
				time+=5;
			}
			else
				time+=1,prev=current;
		}

		// for(auto it:s)
		// {
		// 	cout<<it.first.first<<" "<<it.first.second<<" "<<it.second.first<<" "<<it.second.second<<endl;
		// }
		cout<<time<<endl;

		
	}
	return 0;
}
