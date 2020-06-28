#include <bits/stdc++.h>
#define MAX 25
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,a,b;
	cin>>n>>m;
	ll h[n];
	for(int i=0;i<n;i++)	cin>>h[i];

	int lg[n+1]={0};
	for(int i=2;i<=n;i++) 
		lg[i]=lg[i/2]+1;

	int mx = lg[n]+1;
	ll st[n+1][MAX];
	for(int i=0;i<n;i++)
		st[i][0]=i;
	for(int j=1;j<=mx;j++)
		for(int i=0;i+(1<<j)<=n;i++)
			if(h[st[i][j-1]]>h[st[i+(1<<(j-1))][j-1]])
				st[i][j]=st[i][j-1];
			else
				st[i][j]=st[i+(1<<(j-1))][j-1];
	int ans=0;
	while(m--)
	{
		cin>>a>>b;
		a--,b--;
		if(a==b)
			ans++;
		else if(a<b)
		{
			int j = lg[b-a];
			//cout<<st[a][j]<<" "<<st[b-(1<<j)][j]<<" "<<j<<endl;
			if(max(h[st[a][j]],h[st[b-(1<<j)][j]])<=h[a])
				ans++;
		}
		else
		{
			int j = lg[a-b];
			if(max(h[st[b+1][j]],h[st[a-(1<<j)+1][j]])<=h[a])
				ans++;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}