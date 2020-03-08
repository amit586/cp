#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
//#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		ll arr[n];
		f(i,0,n) cin>>arr[i];

		ll sum=0,xr=0;
		f(i,0,n)
		{
			sum+=arr[i];
			xr^=arr[i];
		}
		ll st=sum;	
		if(2*xr==sum)
		{
			cout<<0<<endl;
			cout<<endl;
		}
		else
		{
			
			ll num1=xr,num2=sum+xr;
			cout<<2<<endl;
			cout<<num1<<' '<<num2<<endl;
		}
	}
}