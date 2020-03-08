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
	cin>>n;
	int arr[n];
	
	f(i,0,n) cin>>arr[i];
	ll black=0,white=0;
	f(i,0,n)
	{
		if(i%2==0)
		{
			if(arr[i]%2==0)
			{
				black+=arr[i]/2;
				white+=arr[i]-arr[i]/2;
			}
			else
			{
				black+=(arr[i]+1)/2;
				white+=arr[i]/2;
			}
		}
		else
		{
			if(arr[i]%2==0)
			{
				white+=arr[i]/2;
				black+=arr[i]-arr[i]/2;
			}
			else
			{
				white+=(arr[i]+1)/2;
				black+=arr[i]/2;
			}
		}

	}
	cout<<min(white,black)<<endl;

}