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
		ll n;
		cin>>n;
		ll x=1,spent=0;
		while(n>=10)
		{
			x=1;
			while(x*10<=n)
			{
				x*=10;
			}
			spent+=x;
			n=n-x+x/10;	
			//cout<<"x "<<x<<" n : "<<n<<" spent "<<spent<<endl;	
		}
		spent+=n;
		cout<<spent<<endl;	
	}
	return 0;
}
