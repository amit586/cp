#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long 
#define MAX 20
#define MAX_N 100010
using namespace std;

ll st[MAX_N][MAX],a[MAX_N];
int lg[MAX_N];

int main(int argc, char const *argv[])
{
	fio
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
			cin>>a[i];

	int mx = lg[n]+1;
	
	for(int i=2;i<=n;i++)
		lg[i]=lg[i/2]+1;

	for(int i=0;i<n;i++)
		st[i][0]=a[i];

	for(int j=1;j<=mx;j++)
		for(int i=0;i+(1<<j)<=n;i++)
			st[i][j] = max(st[i][j-1],st[i+(1<<(j-1))][j-1]);

	
	ll	m,x1,y1,l,r,j;
	cin>>m;
	ll ans=0;

	l = min(x1,y1);
	r = max(x1,y1);

	while(m--)
	{
		cin>>l>>r;
		j = lg[r-l+1];
		if(r-l+1<=n)
			ans += max(st[l][j],st[r-(1<<j)+1][j]);
		else
			ans+=st[0][mx];


	}
	cout<<ans<<endl;


	return 0;
}