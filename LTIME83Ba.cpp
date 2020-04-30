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
	//TC=1;
	while(TC--)
	{
		int n,s;
		cin>>n>>s;
		std::vector<ll> v(n),isfor(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		for(int i=0;i<n;i++)
			cin>>isfor[i];
		vector<ll> def,forw;
		for(int i=0;i<n;i++)
		{
			if(isfor[i])
				forw.push_back(v[i]);
			else
				def.push_back(v[i]);

		}
		sort(forw.begin(),forw.end());
		sort(def.begin(),def.end());
		if(forw.size()==0 || def.size()==0 || s>100)
		{
			cout<<"no\n";
			continue;
		}
		else
		{
			if(100-s-def[0]-forw[0]>=0)
				cout<<"yes\n";
			else
				cout<<"no\n";
		}


	}
	return 0;
}
