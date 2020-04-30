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
		int n;
		cin>>n;
		std::vector<ll> a(n),b(n);
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		for (int i = 0; i < n; ++i)
			cin>>b[i];

		int present[2]={0};
		bool flag=true;

		for(int i=0;i<n;i++)
		{
			if(b[i]>a[i] && present[1]==0 )
			{
				flag=false;
				break;
			}
			else if(b[i]<a[i] && present[0]==0)
			{
				flag=false;
				break;
			}

			if(a[i]==-1)
				present[0]=1;
			else if(a[i]==1)
				present[1]=1;
		}
		flag?cout<<"YES\n":cout<<"NO\n";
		
	}
	return 0;
}
