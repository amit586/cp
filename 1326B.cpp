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
	int TC=1;
	//cin>>TC;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> b;
		ll temp;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			b.push_back(temp);
		}

		ll max = 0;
		std::vector<ll> a(n);
		for(int i=0;i<n;++i)
		{
			a[i]=b[i] + max;
			if(a[i]>max)
				max = a[i];
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		
	}
	return 0;
}
