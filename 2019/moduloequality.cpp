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

	int n;
	ll m;
	cin>>n>>m;
	ll a[n],b[n],c[n],d[n];
	
	f(i,0,n) cin>>a[i];
	f(i,0,n) cin>>b[i];

	f(i,0,n)
	{
		d[i] = a[i];
	 	c[i] = (b[0]-a[i]+m)%m;
	}
	sort(a,a+n);
	sort(b,b+n);
	sort(c,c+n);
	
	int flag=0,value=0;
	
	f(i,0,n)
	{
		f(j,0,n) d[j] = a[j];
		
		f(j,0,n)
		{
			d[j] = (d[j] + c[i])%m;
		}
		
		// cout<<"d : ";
		// f(j,0,n) cout<<d[j]<<" ";
		// cout<<endl;

		sort(d,d+n);
		
		f(j,0,n)
		{
			if(b[j]!=d[j])
				break;
			if(j==n-1) 
			{
				flag=1;
				value = c[i];
			}
		}
		if(flag==1)
			break;
	}
	cout<<value<<endl;


}