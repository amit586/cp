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
		string s;
		cin>>s;

		int arr[n];
		
		for(int i=0;i<n;i++)
		{
			if(s[i]=='L')
				arr[i]=1;
			else if(s[i]=='R')
				arr[i]=-1;
			else if(s[i]=='U')
				arr[i]=2;
			else 
				arr[i]=-2;
		}
		for(int i=1;i<n;i++)
			arr[i]+=arr[i-1];

		 
  

	}
	return 0;
}
