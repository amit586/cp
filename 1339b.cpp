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
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		vector<ll> ans(n);
		int i=n-1;
		int j=0;
		for(int k=n-1;k>=0;k--)
		{
			if(k%2==0)
			{
				ans[k]=v[j];
				j++;
			}
			else
			{
				ans[k]=v[i];
				i--;
			}
		}
	
		for(int i=0;i<n;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}

	return 0;
}
