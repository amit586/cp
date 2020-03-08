#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(long long i=j;i<k;i++)
#define fr(i,j,k) for(long long i=k-1;i>=j;i--)
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		ll N;
		cin>>N;
		ll arr[N];
		f(i,0,N) cin>>arr[i];

		ll ai[N],min = 10000000000000;

		ll j=0;
		f(i,0,N)
		{
			if(arr[i]<min)
			{
				min = arr[i];
				ai[j]=i;
				j++;
			}
		}
		ai[j]=N;

		//f(i,0,j+1) cout<<ai[i]<<" ";	
		//cout<<endl;
		ll sum = 0;
		for(ll i=j;i>0;i--)
		{
			sum+=(ai[i]-ai[i-1])*arr[i-1];
			//cout<<"temp sum "<<(ai[i]-ai[i-1])*arr[i-1]<<endl;
		}
		cout<<sum<<endl;
	}
}