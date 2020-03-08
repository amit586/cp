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
		ll good=n/2+n%2,bad,days=0;
		bad = n-good;
		if(g>=b)
		{
			if(good%g==0)
			{
				days+=good/g;
				if(bad<=b*(good/g-1))
					days+=b*(good/g-1);
				else
					days+=b*(good/g);
			}
			else
			{
				days=(g+b)*(good/g)+good%g;
			}
		}
		else
		{
			ll s = good/g;
			good = good-s*g;
			bad  = bad - s*b;
			days = s*(g+b);
			s = (good+bad)/(g+b);
			days+=(g+b)*s+(good+bad)%(g+b);
			
		}
		cout<<days<<endl;


	}
	return 0;
}
