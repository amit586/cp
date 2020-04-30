#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
#define INF 100000000000

using namespace std;

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,k;
		cin>>n>>k;
		if(k==1)
		{
			int temp;
			for(int i=0;i<n;i++)
				cin>>temp;
			cout<<"yes\n";
			continue;
		}
		std::vector<vector<ll>> v(k,vector<ll> (n/k+(n%k!=0),INF));
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i%k][i/k];
		}

		for(int i=0;i<k;i++)
			sort(v[i].begin(),v[i].end());

		// for(int i=0;i<k ;i++)
		// {
		// 	for(int j=0;j<n/k+ (int)(n%k!=0);j++)
		// 		cout<<v[i][j]<<" ";
		// 	cout<<endl;
		// }
		
		vector<ll> stich;
		for(int i=0;i< n/k + (int)(n%k!=0);i++)
		{
			for(int j=0;j<k;j++)
				if(v[j][i]!=INF)
					stich.push_back(v[j][i]);
		}
		
		// for(int i=0;i<stich.size();i++)
		// 	cout<<stich[i]<<" ";
		// cout<<endl;

		bool flag=true;
		for(int i=1;i<stich.size();i++)
			if(stich[i-1]>stich[i])
				{flag=false;break;}		
		
		flag?cout<<"yes\n":cout<<"no\n";		
	}
	return 0;
}
