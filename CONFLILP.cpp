#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

ll solve(ll i,ll n,ll q)
{
	if(n%2==0 || ( q==i))
		return n/2;
	else
		return n/2+1;
		//n/2 -- ~i,
		//n-n/2 -- i
}

using namespace std;

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		ll g;
		cin>>g;
		while(g--)
		{
			ll n,i,q;
			cin>>i>>n>>q;
			cout<<solve(i,n,q)<<endl;
		}
		
	}
	return 0;
}
			