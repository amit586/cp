#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int max_profit=0,profit;
		for(int i=0;i<n;i++)
		{
			int si,vi,pi	;
			cin>>si>>vi>>pi;
			profit = (vi/(si+1))*pi;
			if(profit>max_profit)
				max_profit=profit;
		}
		cout<<max_profit<<endl;
	}
	return 0;
}
