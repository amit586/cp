#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
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
		deque<ll> dq;
		ll temp;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			dq.push_back(temp);
		}
		ll alice = 0;
		ll bob = 0;
		ll prev = 0;
		bool ma=true;
		ll moves=0;
		while(!dq.empty())
		{
			if(ma)
			{
				ll local_sum = 0;
				while(local_sum<=prev && !dq.empty())
				{
					local_sum+=dq.front();
					dq.pop_front();
				}
				prev = local_sum;
				alice+=local_sum;
				ma=false;
			}
			else
			{
				ll local_sum = 0;
				while(local_sum<=prev && !dq.empty())
				{
					local_sum+=dq.back();
					dq.pop_back();
				}
				prev=local_sum;
				bob+=local_sum;
				ma=true;
			}
			moves++;
		}
		cout<<moves<<" "<<alice<<" "<<bob<<endl;
	}
	return 0;
}
