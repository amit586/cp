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
	ll n;
	cin>>n;
	//if(n==0)
	
	ll a=1,b=n;
	for (ll i=1; i<=sqrt(n)+2; i++) 
	{ 
		if (n%i == 0) 
		{ 
			ll a1=n/i,b1=i,gc=__gcd(n/i,i);
			if(max(a1,b1)<=max(a,b) && a1*b1/gc==n)
			{
				a = i;
				b=n/i;
			}
			//cout<<"a: "<<a<<" b: "<<b<<endl;
		} 
	} 
	cout<<a<<" "<<b<<endl;
	


}
