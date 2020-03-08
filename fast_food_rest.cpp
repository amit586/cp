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
		int arr[3];
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);
		int ans=0;
		if(arr[2]>=1)
		{
			ans++;
			arr[2]--;
		}
		if(arr[1]>=1)
		{
			ans++;
			arr[1]--;
		}
		if(arr[0]>=1)
		{
			ans++;
			arr[0]--;
		}
		
		if(arr[2]>=1 && arr[1]>=1)
		{
			ans++;
			arr[2]--;
			arr[1]--;
		}
		if(arr[2]>=1 && arr[0]>=1)
		{
			ans++;
			arr[2]--;
			arr[0]--;
		}
		if(arr[1]>=1 && arr[0]>=1)
		{
			ans++;
			arr[1]--;
			arr[0]--;
		}
		if(arr[0]>=1 && arr[1]>=1 && arr[2]>=1)
		{
			ans++;
		}

		cout<<ans<<endl;
	}
	return 0;
}
