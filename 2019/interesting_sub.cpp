#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	fio
	int T,N;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		ll arr[n];
		f(i,0,n) cin>>arr[i];

		int low_ind=0,high_ind=0;
		f(i,0,n-1)
		{
			if(abs(arr[i]-arr[i+1])>1)
			{
				low_ind=i;
				high_ind=i+1;
			}
		}

		if(low_ind==high_ind)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			cout<<low_ind+1<<" "<<high_ind+1<<endl;
		}


	}
}