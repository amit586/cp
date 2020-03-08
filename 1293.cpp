#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
#define endl "\n"
using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		ll n,s,k;
		cin>>n>>s>>k;
		ll arr[k];
		f(i,0,k) cin>>arr[i];

		sort(arr,arr+k);
		// f(i,0,k) cout<<arr[i]<<" ";
		// cout<<endl;

		if(! binary_search(arr,arr+k,s)) 
		{
			cout<<0<<endl;
			//cout<<"block 1"<<endl;
		}
		else
		{
			ll count_up=1,temp1=s,temp2=s;
			while(binary_search(arr,arr+k,++temp1))
			{
				count_up++;
			}
			ll count_down=1;
			//temp=s
			while(binary_search(arr,arr+k,--temp2))
			{
				count_down++;
			}
			//cout<<"up: "<<count_up<<" down : "<<count_down<<endl;
			if(temp2<1) cout<<count_up<<endl;
			else if(temp1>n) cout<<count_down<<endl;
			else
				count_down<count_up?cout<<count_down<<endl:cout<<count_up<<endl;
		}
	}
}
