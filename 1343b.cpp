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
	//TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		if(n%4!=0)
		{
			cout<<"NO\n";
			continue;
		}

		int j=0;
		cout<<"YES\n";
		ll sum1=0,sum2=0;
		for(int i=0;i<n/2;i++)
			cout<<2*i+2<<" ",sum1+=(2*i+2);

		for(int i=n/2;i< n-1;i++)
			cout<<2*j+1<<" ",sum2+=(2*j+1),j++;
		
		cout<<sum1-sum2<<" ";
		cout<<endl;



	}
	return 0;
}
