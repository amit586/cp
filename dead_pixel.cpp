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
		ll a,b,x,y;
		cin>>a>>b>>x>>y;
		ll arr[4] ;
		arr[0]= x*b;
		arr[1]=(a-1-x)*b;
		arr[2]=y*a;
		arr[3]=(b-1-y)*a;
		sort(arr,arr+4);
		cout<<arr[3]<<endl;
		
	}
	return 0;
}
