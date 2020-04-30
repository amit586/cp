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
	TC=1;
	//cin>>TC;
	while(TC--)
	{
		ll n,k;
		cin>>n>>k;
		if(n%k==0)
			cout<<0<<endl;
		else
			n%k>abs(k-(n%k))?cout<<(abs(k-(n%k))):cout<<n%k<<endl;

	}
	return 0;
}
