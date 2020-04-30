#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;


int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		ll n;
		cin>>n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++)
			cin>>v[i];

		int time=0;
		ll ub = 0;
		for(int i=0;i<n-1;i++)
		{
			if(v[i]>v[i+1])
			{
				ll diff = v[i]-v[i+1];
				//cout<<"diff "<<diff<<" ub "<<ub<<endl;
				while(diff>(2*ub-1))
				{
					if(time==0)
						ub=1;
					else
						ub = 2*ub;
					time++;
					//cout<<"t "<<time<<" ub "<<ub<<endl;

				}
				v[i+1] += diff;
			}
		}
		cout<<time<<endl;
	}
	return 0;
}