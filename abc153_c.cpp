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
	ll N,K;
	cin>>N>>K;
	ll arr[N];
	f(i,0,N) cin>>arr[i];
	sort(arr,arr+N);

	ll sum = 0;
	for(int i=0;i<N-K ;i++)
		sum+=arr[i];
	cout<<sum<<endl;
	return 0;
}
