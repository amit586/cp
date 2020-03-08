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
		int n;
		cin>>n;
		long long arr[n],ar1[n];
		long long sum=0,count=0;
		f(i,0,n)
		{
			cin>>arr[i];
			ar1[i]=arr[i];
			if(arr[i]!=-1)
			{
				count++;
				sum+=arr[i];
			}
		}
		long long avg;
		if(!count)
			avg=0;
		else
			avg=sum/count;

		f(i,0,n)
		{
			if(arr[i]==-1)
			{	
				arr[i]=avg;
				ar1[i]=avg+1;
			}
		}
		ll max_difference=INT_MIN,max_difference1=INT_MIN;
		f(i,0,n-1)
		{
			max_difference = max(abs(arr[i]-arr[i+1]),max_difference);
			max_difference1 = max(abs(ar1[i]-ar1[i+1]),max_difference1);
		}
		if(max_difference<=max_difference1)
			cout<<max_difference<<" "<<avg<<endl;
		else
			cout<<max_difference1<<" "<<avg+1<<endl;
			
	}
	return 0;
}
