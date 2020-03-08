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
		ll a=0,b=0,c=0,d=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				a  = i;
				break;
			}
		}
		//cout<<"a"<<a<<endl;
		if(a==0)
		{
			cout<<"NO\n";
			continue;
		}
		d  = n/a;
		for(int i=a+1;i<=sqrt(d);i++)
		{
			if(d%i==0)
			{
				b  = i;
				c = d/i;
				break;
			}
		}
		//cout<<a<<" "<<b<<" "<<c<<endl;
		if(a>=2 && b>a && c>b && a*b*c==n)
			cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
		else 
			cout<<"NO"<<endl;
		
	}
	return 0;
}
