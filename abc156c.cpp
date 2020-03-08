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
	TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v;
		ll temp,sum=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			sum+=temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		sum/=n;
		ll s2=sum+1;

		ll stamina = 0,stamina2=0;
		for (int i = 0; i < n; ++i)
		{
			stamina+=pow( (sum-v[i]),2);
			stamina2 = pow((s2-v[i]),2);
		}
		cout<<min(stamina,stamina2)<<endl;
		

	}
	return 0;
}
