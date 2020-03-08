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
	TC=1;
	while(TC--)
	{
		int n,r;
		cin>>n>>r;
		if(n>=10)
			cout<<r<<endl;
		else
		{
			int inner = r+100*(10-n);
			cout<<inner<<endl;
		}


	}
	return 0;
}
