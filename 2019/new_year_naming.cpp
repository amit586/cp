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
	int N,M;
	cin>>N>>M;
	string n[N],m[M];
	f(i,0,N) cin>>n[i];
	f(i,0,M) cin>>m[i];
	int q;
	cin>>q;
	while(q--)
	{
			ll y,i,j;
			cin>>y;
			y--;
			i = y%N;
			j = y%M;
			string ans = n[i]+m[j];
			cout<<ans<<endl;
	}
}
