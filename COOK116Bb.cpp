#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main()
{
	fio
	int TC;
	cin>>TC;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v;
		ll temp;
		ll mx=INT_MIN;
		vector <ll> imax;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			mx  = max(mx,temp);
			v.push_back(temp);
		}
		
		for(int i=0;i<n;i++)
		{
			if(v[i]==mx)
				imax.push_back(i);
		}

		if(imax.size()==1)
		{
			cout<<n/2<<endl;
			continue;
		}

		ll max_d = (n+imax[0]-imax[imax.size()-1]);
		for(int i=1;i<imax.size();i++)
		{
			max_d = max(max_d,imax[i]-imax[i-1]);
		}

		(max_d-n/2)>0?cout<<max_d-n/2<<endl:cout<<0<<endl;
	}
	return 0;
}
