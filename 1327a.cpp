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
		ll n,k;
		cin>>n>>k;
		if((n%2==1 && k%2==0)||(n%2==0 && k%2==1)|| (n<k*k) )
			cout<<"NO\n";
		else
			cout<<"YES\n";		
	}
	return 0;
}
