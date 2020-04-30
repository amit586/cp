#include<bits/stdc++.h>
#define P 998244353
#define ll long long
using namespace std;
int main()
{
	ll n,k;
	cin>>n>>k;
	vector <ll> pos;
    ll temp,sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>temp;
		if(temp>n-k)
		{
			pos.push_back(i);
			sum+=temp;
		}
	}
	long long maxP =1;
	if(k==1)
	{
		cout<<n<<" 1"<<endl;
		return 0;		
	}
	for(ll i=1;i<pos.size();i++)
	{
		maxP = ((maxP%P)*((pos[i]-pos[i-1])%P))%P;
	}
	cout<<sum<<" "<<maxP<<endl;
	
	return 0;
}
