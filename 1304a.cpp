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
	int T;
	cin>>T;
	while(T--)
	{
		ll a,b,x,y;
		cin>>x>>y>>a>>b;
		ll dist = abs(x-y);
		if(dist%(a+b)==0)
		{
			cout<<dist/(a+b)<<endl;
		}	
		else
			cout<<-1<<endl;
	}
	return 0;
}
