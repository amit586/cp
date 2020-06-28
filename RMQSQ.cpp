#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long 
#define MAX 25

using namespace std;

int two(int k)
{
	return (1<<k);
}


int main(int argc, char const *argv[])
{
	fio
	int n;
	cin>>n;
	ll st[n+1][MAX],a[n];
	int lg[n+1];
	
	for(int i=0;i<n;i++)
			cin>>a[i];

	for(int i=2;i<=n;i++)
		lg[i]=lg[i/2]+1;
	int mx = lg[n]+1;
	
	for(int i=0;i<n;i++)
		st[i][0]=a[i];

	for(int j=1;j<=mx;j++)
		for(int i=0;i+(1<<j)<=n;i++)
			st[i][j] = min(st[i][j-1],st[i+two(j-1)][j-1]);

	
	ll	q,l,r,j;
	cin>>q;
	ll ans=0;
	while(q--)
	{
		cin>>l>>r;
		j = lg[r-l+1];
		//cout<<j<<endl;
		cout<<min(st[l][j],st[r-two(j)+1][j])<<endl;
	}



	return 0;
}