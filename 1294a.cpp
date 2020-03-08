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
	int T;
	cin>>T;
	while(T--)
	{
		ll arr[3],n;
		cin>>arr[0]>>arr[1]>>arr[2]>>n;
		sort(arr,arr+3);
		ll A,B,C=0,x;
		A = arr[2]-arr[0];
		B = arr[2]-arr[1];
		x = abs(n-A-B)/3;
		A+=x;
		B+=x;
		C=x;
		if((A+B+C==n) && (arr[0]+A)==(arr[1]+B) && (arr[2]+C)==(arr[0]+A))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
