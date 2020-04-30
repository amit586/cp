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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;

		ll xMove = b-a;
		ll yMove = d-c;

		if(x+xMove>x2 || x+xMove<x1 || y+yMove>y2 || y+yMove<y1 || ( (a||b) && (x2-x1) ) ||((c||d) && (y2-y1)) )
		{
			cout<<"NO\n";	
		}
		else
			cout<<"YES\n";
	}
	return 0;
}
