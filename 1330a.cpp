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
	while(TC--)
	{
		int n,k;
		cin>>n>>k;
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}

		sort(v.begin(),v.end());
		int i=1;
		//binary_search(startaddress, endaddress, valuetofind)
		while(k || binary_search(v.begin(),v.end(),i) )
		{
			if(!binary_search(v.begin(),v.end(),i))
				k--;
			i++;
		}
		cout<<i-1<<endl;

		
	}
	return 0;
}
