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
		ll n,g,b;
		cin>>n>>g>>b;

		ll good,bad;
		good = (n+n%2)/2;
		bad = n-good;
		ll s = good/g;
		good = good-s*g;
		bad = bad - s*b;
		ll days = s*(g+b);
		if(good==0 && bad+b<=0)
		{
			days-=b;
			bad+=b;
		}
		bad = max((ll)0,bad);
		s = (good+bad)/(g+b);
		days+=(g+b)*s+(good+bad)%(g+b);
		cout<<days<<endl;


	}
	return 0;
}
