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
	while(TC--)
	{
		ll n,k;
		int d = 0;
		cin>>n>>k;
		while(n!=0)
		{
			n=n/k;
			d++;
		}
		cout<<d<<endl;
		

	}
	return 0;
}
