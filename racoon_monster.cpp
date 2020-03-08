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
	ll N,H;
	cin>>H>>N;
	ll sum=0,temp;
	f(i,0,N)
	{
		cin>>temp;
		sum+=temp;
	}
	sum>=H?cout<<"Yes\n":cout<<"No\n";
	return 0;
}
