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
		std::vector<pair<int,int>> v(n);
		int pi,ci;
		int i = 0;
		bool flag=true;
		for (; i < n; ++i)
		{
			cin>>pi>>ci;
			if(ci>pi)
			{
				flag = false;
			}
			v[i]= {pi,ci};
		}
		if(!flag)
		{
			cout<<"NO\n";
			continue;
		}
		int j=1;

		for(;j<n;j++)
		{
			if(!(v[j].second>=v[j-1].second && v[j].first>=v[j-1].first &&
			 (v[j].first-v[j-1].first)>=(v[j].second-v[j-1].second) ))
			{
				break;
			}
		}
		if(j==n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
			
	}
	return 0;

}
