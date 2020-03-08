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
	TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v;
		ll temp;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			v.push_back(temp);
		}
		int best = 0;
		ll sum=0,max_sum=INT_MIN;
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=min(v[i],v[j]);
			}
			cout<<i<<" "<<sum<<endl;
			if(sum>max_sum)
			{
				max_sum=sum;
				best=i;
			}			
		}
		cout<<"best "<<best<<" " <<max_sum<<endl;
		
		for(int i=best-1;i=0;i--)
		{
			v[i]=min(v[i],v[best]);
			v[i]=min(v[i],v[i+1]);
		}
		for(int i=best+1;i<n;i++)
		{
			v[i]=min(v[i],v[best]);
			v[i]=min(v[i],v[i-1]);
		}
		for(int i=0;i<n;i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
