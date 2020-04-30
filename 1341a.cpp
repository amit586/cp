#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()

// 
using namespace std;

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		ll n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		int mx = n*(a+b),mn = n*(a-b);
		if(c+d<mn || c-d>mx)	cout<<"NO\n";
		else	cout<<"YES\n";
		
	}
	return 0;
}
