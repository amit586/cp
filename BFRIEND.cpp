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
		ll n,a,b,c;
		cin>>n>>a>>b>>c;
		ll arr[n];
		f(i,0,n)
			cin>>arr[i];
		sort(arr,arr+n);
		if(b<a)
			swap(a,b);
		ll dmin[3];
		dmin[0]=INT_MAX;
		dmin[1]=INT_MAX;
		dmin[2]=INT_MAX;
		for(int i=0;i<n;i++)
		{
			if(a<arr[i] && arr[i]<b)
			{
				dmin[0]=0;
				break;
			}
			if(a>=arr[i])
			{
				if(abs(a-arr[i])<dmin[1])
					dmin[1]=abs(a-arr[i]);
			}

			if(arr[i]>=b)
			{
				if(abs(b-arr[i])<dmin[2])
					dmin[2]=abs(b-arr[i]);
			}
		}
		sort(dmin,dmin+3);
		cout<<abs(b-a)+c+2*dmin[0]<<endl;

	}
	return 0;
}
