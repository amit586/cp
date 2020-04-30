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
	//TC=1;
	while(TC--)
	{
		ll n;
		cin>>n;
		ll x=3;
		int i=2;
		while(n%(x)!=0)
		{
			i++;
			x = pow(2,i)-1;
		}
		cout<<n/x<<endl;
		
	}
	return 0;
}
